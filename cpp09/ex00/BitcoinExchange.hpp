/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:49:31 by madamou           #+#    #+#             */
/*   Updated: 2024/10/30 22:10:17 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <exception>
#include <fstream>
#include <iostream>
#include <map>

# define DATA_CSV_PATH "data.csv"
# define MIN_VAL 0
# define MAX_VAL 1000

typedef struct s_date{
	std::string year;
	std::string mounth;
	std::string day;
}t_date;

class BitcoinExchange {
	private:
		std::ifstream _dataCSV;
		std::ifstream _input;
		std::map<std::string, float> _map;
		void parseLine(std::string line);
		void setMapData(void);
		void checkMap(void) const;

	public:
		BitcoinExchange(std::string const inputFile);
		~BitcoinExchange();

		void processFile(void);
		class CantOpenInfileException : public std::exception {
			const char * what() const throw() {
				return ("Can't open the infile");		
			}
		};
		class CantOpenDataCsvException : public std::exception {
			const char * what() const throw() {
				return ("Can't open the data.csv");		
			}
		};
		class NoLineInFileException : public std::exception {
			const char * what() const throw() {
				return ("No line in the infile");		
			}
		};
		class ParseErrorException : public std::exception {
			const char * what() const throw() {
				return ("Parsing error in data.csv");		
			}
		};
};

#endif