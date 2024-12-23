/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:10:51 by madamou           #+#    #+#             */
/*   Updated: 2024/10/31 13:29:44 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>
#include <exception>
#include <iostream>

int main(int argc, char **argv) {
	
	if (argc != 2) {
		std::cerr << "Need 2 arguments to calculate !!" << std::endl;
		return 1;
	}
	try {
		RPN calc;
		for (int i = 0; argv[1][i]; i++) {
			while (std::isspace(argv[1][i])) {
				i++;
			}
			calc.addToCalculator(argv[1][i]);
		}
		if (calc.getStackLen() != 1) {
			std::cerr << "Error" << std::endl;
			return 1;
		}
		std::cout << calc.getNb() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}