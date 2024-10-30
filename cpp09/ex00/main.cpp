/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:49:44 by madamou           #+#    #+#             */
/*   Updated: 2024/10/30 22:42:33 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <exception>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}
	try {
		BitcoinExchange bitcoin(argv[1]);
		bitcoin.processFile();
	} catch (const std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}