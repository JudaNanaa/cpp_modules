/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:46:33 by madamou           #+#    #+#             */
/*   Updated: 2024/11/02 17:22:34 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <string>
#include <variant>

void printInt(int nb) {
	std::cout << "int: ";
	std::cout << nb << std::endl;
}

void printChar(char c) {
	std::cout << "char: ";
	if (std::isprint(c) == false) {
		std::cout << "Non displayable" << std::endl;
	} 
	else {
		std::cout << "'" << c << "'" << std::endl;
	}
}

void printFloat(float nb) {
	std::cout << "float: ";
	if (std::floor(nb) == nb) {
		std::cout << std::fixed << std::setprecision(1) << nb << "f" << std::endl;
	}
	else {
		std::cout << nb << "f" << std::endl;
	}
}

void printDouble(double nb) {
	std::cout << "double: ";
	if (std::floor(nb) == nb) {
		std::cout << std::fixed << std::setprecision(1) << nb << std::endl;
	}
	else {
		std::cout << nb << std::endl;
	}
}

int ifInfinity(std::string str) {
	if (str != "+inf" && str != "-inf" && str != "nan") {
		return 0;
	}
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "inf" || str == "+inf") {
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (str == "-inf") {
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	if (str == "nan") {
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	return 1;
}

void charImpossible (void) {
	std::cout << "char: impossible" << std::endl;
}

void intImpossible (void) {
	std::cout << "int: impossible" << std::endl;
}

void floatImpossible (void) {
	std::cout << "float: impossible" << std::endl;
}

void doubleImpossible (void) {
	std::cout << "double: impossible" << std::endl;
}

void ifFail(void) {
	charImpossible();
	intImpossible();
	floatImpossible();
	doubleImpossible();
}

void convertFloat(std::string str) {
	std::stringstream ss;
	float nb;
	ss << str;
	ss >> nb;
	if (ss.fail()) {
		ifFail();
	}
	else {
		printChar(static_cast<char>(nb));
		printInt(static_cast<int>(nb));
		printFloat(static_cast<float>(nb));
		printDouble(static_cast<double>(nb));
	}
}


void convertDouble(std::string str) {
	std::stringstream ss;
	double nb;
	ss << str;
	ss >> nb;
	if (ss.fail()) {
		ifFail();
	}
	else {
		printChar(static_cast<char>(nb));
		printInt(static_cast<int>(nb));
		printFloat(static_cast<float>(nb));
		printDouble(static_cast<double>(nb));
	}
}

void convertInt(std::string str) {
	std::stringstream ss;
	int nb;
	ss << str;
	ss >> nb;
	if (ss.fail()) {
		ifFail();
	}
	else {
		printChar(static_cast<char>(nb));
		printInt(static_cast<int>(nb));
		printFloat(static_cast<float>(nb));
		printDouble(static_cast<double>(nb));
	}
}

void ScalarConverter::convert(std::string to_convert) {
	if (ifInfinity(to_convert) == true) {
		return;
	}
	else if (to_convert.find("f") != std::string::npos) {
		convertFloat(to_convert);
	}
	else if (to_convert.find(".") != std::string::npos) {
		convertDouble(to_convert);
	}
	else {
		convertInt(to_convert);
	}
}