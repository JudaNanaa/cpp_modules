/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:39:02 by madamou           #+#    #+#             */
/*   Updated: 2024/10/01 23:13:44 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdio>
#include <iterator>
#include <string>

Harl::Harl(void) {
	
}

Harl::~Harl(void) {
	
}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void nl_cout(void) {
	std::cout << std::endl;
}

void Harl::complain(std::string level) {
	std::string tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;

	i = 0;
	while (i < 4) {
		if (tab[i] == level) {
			break;
		}
		i += 1;
	}
	switch (i) {
		case 0:
			(debug(), nl_cout(), info(), nl_cout(), warning(), nl_cout(), error());
			break;
		case 1:
			(info(), nl_cout(), warning(), nl_cout(), error());
			break;
		case 2:
			(warning(), nl_cout(), error());
			break;
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}