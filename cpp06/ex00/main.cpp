/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:00:06 by madamou           #+#    #+#             */
/*   Updated: 2024/10/28 16:55:14 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "I need 1 argument to convert !! " << std::endl;
		return 1;
	}
	if (argc > 2 ) {
		std::cout << "I need only 1 argument to convert !! " << std::endl;
		return 1;
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}