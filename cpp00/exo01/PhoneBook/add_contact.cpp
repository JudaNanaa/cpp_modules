/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:41:08 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 18:53:55 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

void PhoneBook::addFirstName(void) {
	std::string input;
	
	std::cout << "Enter the first name: ";
	std::getline(std::cin, input);
	this->_repertoire[this->_write].setFirstName(input);
}

void PhoneBook::addLastName(void) {
	std::string input;
	
	std::cout << "Enter the last name: ";
	std::getline(std::cin, input);
	this->_repertoire[this->_write].setLastName(input);
}

void PhoneBook::addNickName(void) {
	std::string input;
	
	std::cout << "Enter the nickname: ";
	std::getline(std::cin, input);
	this->_repertoire[this->_write].setNickName(input);
}

int check_if_all_digit(std::string input) {
	int i;

	i = 0;
	while (input[i]) {
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i += 1;
	}
	return (1);
}

void PhoneBook::addPhoneNumber(void) {
	std::string input;
	
	while (true) {
		std::cout << "Enter the phone number: ";
		std::getline(std::cin, input);
		if (input.length() == 10 && check_if_all_digit(input))
			break;
		std::cout << "Error: '" << input << "' not a good phone number" << std::endl;
	}
	this->_repertoire[this->_write].setPhoneNumber(input);
}

void PhoneBook::addDarkestSecret(void) {
	std::string input;
	
	std::cout << "Enter the darkest secret: ";
	std::getline(std::cin, input);
	this->_repertoire[this->_write].setDarkestSecret(input);
}

void PhoneBook::addContact(void) {
	this->addFirstName();
	this->addLastName();
	this->addNickName();
	this->addPhoneNumber();
	this->addDarkestSecret();
	if (this->_nbContact < 8)
		this->_nbContact += 1;
}
