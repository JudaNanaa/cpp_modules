/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:42:13 by madamou           #+#    #+#             */
/*   Updated: 2024/11/02 08:02:47 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <exception>

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cerr << "Too few arguments" << std::endl;
		return 1;
	}
	try {
		PmergeMe sort;
		sort.parseArgs(argv);
		sort.sort();
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}