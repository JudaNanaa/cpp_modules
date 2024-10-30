/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:49:27 by madamou           #+#    #+#             */
/*   Updated: 2024/10/30 23:05:54 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cctype>
#include <cstddef>
#include <exception>
#include <map>
#include <string>
#include <cstdlib>

BitcoinExchange::BitcoinExchange(std::string const inputFile) 	{
	this->_dataCSV.open(DATA_CSV_PATH);
	if (this->_dataCSV.fail()) {
		throw BitcoinExchange::CantOpenDataCsvException();
	}
	this->_input.open(inputFile.c_str());
	if (this->_input.fail()) {
		throw BitcoinExchange::CantOpenInfileException();
	}
	this->setMapData();
}

BitcoinExchange::~BitcoinExchange() 	{
	if (this->_dataCSV.is_open()) {
		this->_dataCSV.close();
	}
	if (this->_input.is_open()) {
		this->_input.close();
	}
}

int getNbChar(std::string str, char c) {
	int nb;

	nb = 0;
	for (int i = 0; str[i]; i++) {
		if (str[i] == c) {
			++nb;
		}
	}
	return nb;
}

int isAllDigits(std::string str) {
	for (int i = 0; str[i]; i++) {
		if (str[i] < '0' || str[i] > '9') {
			return false;
		}
	}
	return true;
}

bool isFloat(std::string str) {
	int nbDot;

	nbDot = 0;
	
	for (int i = 0; str[i]; i++) {
		if (i == 0) {
			if ((str[i] < '0' || str[i] > '9') && str[0] != '+' && str[0] != '-')
				return false;
		}
		else {
			if ((str[i] < '0' || str[i] > '9') && str[i] != '.') {
				return false;
			}
			if (str[i] == '.') {
				++nbDot;
				if (nbDot > 1) {
					return false;				
				}
			}
		}
	}
	return true;
}

void BitcoinExchange::setMapData(void) {
	std::string line;
	std::string beforeDot;
	std::string afterDot;
	std::size_t dot;
	t_date date;

	std::getline(this->_dataCSV, line);
	if (!this->_dataCSV) {
		throw BitcoinExchange::NoLineInFileException();
	}
	if (line != "date,exchange_rate") {
		throw BitcoinExchange::ParseErrorException();
	}
	while (std::getline(this->_dataCSV, line)) {
		if (getNbChar(line, ',') != 1) {
			throw BitcoinExchange::ParseErrorException();
		}
		dot = line.find(',');
		beforeDot = line.substr(0, dot);
		afterDot = line.substr(dot + 1, line.length());
		if (beforeDot.length() != 10 || getNbChar(beforeDot, '-') != 2) {
			throw BitcoinExchange::ParseErrorException();
		}
		if (beforeDot.find_first_of('-') != 4 || beforeDot.find_last_of('-') != 7) {
			throw BitcoinExchange::ParseErrorException();
		}
		date.year = beforeDot.substr(0, beforeDot.find_first_of('-'));
		date.mounth = beforeDot.substr(beforeDot.find_first_of('-') + 1, beforeDot.find_last_of('-') - beforeDot.find_first_of('-') - 1);
		date.day = beforeDot.substr(beforeDot.find_last_of('-') + 1, beforeDot.length());
		if (isAllDigits(date.year) == false) {
			throw BitcoinExchange::ParseErrorException();
		}
		if (isAllDigits(date.mounth) == false || atoi(date.mounth.c_str()) <= 0 || atoi(date.mounth.c_str()) > 12) {
			throw BitcoinExchange::ParseErrorException();
		}
		if (isAllDigits(date.day) == false || atoi(date.day.c_str()) <= 0 || atoi(date.day.c_str()) > 31) {
			throw BitcoinExchange::ParseErrorException();
		}
		if (isFloat(afterDot) == false) {
			throw BitcoinExchange::ParseErrorException();
		}
		if (this->_map.size() != 0 && this->_map.rbegin()->first > beforeDot) {
			throw BitcoinExchange::ParseErrorException();
		}
		this->_map[beforeDot] = atof(afterDot.c_str());
	}
}

void BitcoinExchange::processFile(void) {
	std::string line;
	std::size_t pipe;
	std::string beforePipe;
	std::string afterPipe;
	t_date date;
	std::map<std::string, float>::iterator it;
	std::map<std::string, float>::iterator end;

	std::getline(this->_input, line);
	if (!this->_input) {
		throw BitcoinExchange::NoLineInFileException();
	}
	if (line != "date | value") {
		throw BitcoinExchange::ParseErrorException();
	}
	while (std::getline(this->_input, line)) {
		if (getNbChar(line, '|') != 1 || getNbChar(line, ' ') != 2) {
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		pipe = line.find('|');
		if (line[pipe - 1] != ' ' || line[pipe + 1] != ' ') {
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		beforePipe = line.substr(0, pipe - 1);
		afterPipe = line.substr(pipe + 2, line.length());
		if (beforePipe.length() != 10 || getNbChar(beforePipe, '-') != 2) {
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		if (beforePipe.find_first_of('-') != 4 || beforePipe.find_last_of('-') != 7) {
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		date.year = beforePipe.substr(0, beforePipe.find_first_of('-'));
		date.mounth = beforePipe.substr(beforePipe.find_first_of('-') + 1, beforePipe.find_last_of('-') - beforePipe.find_first_of('-') - 1);
		date.day = beforePipe.substr(beforePipe.find_last_of('-') + 1, beforePipe.length());
		if (isAllDigits(date.year) == false) {
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		if (isAllDigits(date.mounth) == false || atoi(date.mounth.c_str()) <= 0 || atoi(date.mounth.c_str()) > 12) {
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		if (isAllDigits(date.day) == false || atoi(date.day.c_str()) <= 0 || atoi(date.day.c_str()) > 31) {
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		if (isFloat(afterPipe) == false) {
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		if (atof(afterPipe.c_str()) > 1000) {
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		if (atof(afterPipe.c_str()) < 0) {
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		it = this->_map.begin();
		end = this->_map.end();
		while (it != end) {
			if (it->first == beforePipe) {
					std::cout << beforePipe << " => " << afterPipe << " = " << it->second * atof(afterPipe.c_str()) << std::endl;
					break;
			}
			else if (it->first > beforePipe) {
				--it;
					std::cout << beforePipe << " => " << afterPipe << " = " << it->second * atof(afterPipe.c_str()) << std::endl;
					break;
			}
			++it;
		}
		if (it == end) {
			--it;
					std::cout << beforePipe << " => " << afterPipe << " = " << it->second * atof(afterPipe.c_str()) << std::endl;
		}
	}
}
