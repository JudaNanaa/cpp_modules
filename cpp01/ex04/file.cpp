/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:30:37 by madamou           #+#    #+#             */
/*   Updated: 2024/10/01 16:41:10 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"
#include <cstddef>
#include <cstring>
#include <string>

File::File(void) {
	
}

File::~File(void) {
	close_files();
}

bool File::open_files(char **argv) {
	this->_infile.open(argv[1]);
	if (this->_infile.fail()) {
		std::cerr << "Cannot open the infile !!" << std::endl;
		return false;
	}
	this->_outfile.open(std::string(argv[1]).append(".replace").c_str());
	if (this->_outfile.fail()) {
		std::cerr << "Cannot open the outfile !!" << std::endl;
		return false;
	}
	return true;
}

void File::close_files(void) {
	if (this->_infile.is_open()) {
		this->_infile.close();
	}
	if (this->_outfile.is_open()) {
		this->_outfile.close();
	}	
}

std::string File::file_to_string(void) {
	std::string line;
	char c;

	while (this->_infile.get(c)) {
		line.push_back(c);
	}
	return line;
}

void File::copy_and_replace(char **argv) {
    std::string buf_file;
    std::size_t found;
    std::string tmp;

    buf_file = this->file_to_string();
	if (std::strcmp(argv[2], argv[3]) != 0) {
		while (true) {
			found = buf_file.find(argv[2]);
			if (found == std::string::npos) {
				break;
			}
			tmp = buf_file.substr(found + std::strlen(argv[2]));
			buf_file.erase(found);
			buf_file.append(argv[3]);
			buf_file.append(tmp);
		}
	}
    this->_outfile << buf_file;
}
