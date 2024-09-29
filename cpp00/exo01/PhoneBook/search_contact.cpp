/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:44:02 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 19:32:49 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>

void printFormat(std::string str) {
	if (str.length() > 10) {
		for (int i = 0; i < 9; i++) {
			std::cout << str[i];
		}
		std::cout << ".";
	} else {
		int rest = 10 - str.length();
		for (int i = 0; i < rest; i++) {
			std::cout << " ";
		}
		std::cout << str;
	}
}

void PhoneBook::printRepertoire(void) {
	if (this->_nbContact == 0) {
		std::cout << "No contact in the PhoneBook !!" << std::endl;
	} else {
		std::cout << "   index  |first name| last name|  nickname|" << std::endl;
		for (int index = 0; index < this->_nbContact; index++) {
			std::cout << "         " << index + 1 << "|";
			printFormat(this->_repertoire[index].getFirstName());
			std::cout << "|";
			printFormat(this->_repertoire[index].getLastName());
			std::cout << "|";
			printFormat(this->_repertoire[index].getNickName());
			std::cout << "|" << std::endl;
		}
	}
}

void printOneContact(Contact contact) {
	std::cout << "Here is the contact infos !!" << std::endl;
	std::cout << "First name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickName() << std::endl;
	std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
}

void PhoneBook::searchContact(void) {
	std::string input;
	int index;

	this->printRepertoire();
	while (true) {
		std::getline(std::cin, input);
		if (input.length() == 1 && input[0] >= '1' && input[0] <= '8') {
			if (input[0] - 48 <= this->_nbContact) {
				index = input[0] - 48;
				break;
			}
		}
		std::cerr << "Error: \"" << input << "\" is not a good input" << std::endl;		
	}
	printOneContact(this->_repertoire[index - 1]);
}