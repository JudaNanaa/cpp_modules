/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:55:49 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 19:14:04 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook/PhoneBook.hpp"
#include "includes/includes.hpp"
#include <iostream>
#include <string>

int main() {
	PhoneBook phonebook;
	std::string input;

	phonebook.initPhoneBook();
	while (true) {
		std::cout << "Enter a line" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0) {
			phonebook.addContact();
		} else if (input.compare("SEARCH") == 0) {
			phonebook.searchContact();
		} else if (input.compare("EXIT") == 0) {
			break;
		} else {
			std::cerr << "This input is not correct: \""<< input << "\"" << std::endl;
		}
	}
	std::cout << "See you next time !!" << std::endl;
	return (0);
}
