/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:40:00 by madamou           #+#    #+#             */
/*   Updated: 2024/10/01 00:33:35 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

#include <ios>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	File files;
	
	if (argc != 4) {
		std::cerr << "Not the right arguments number !!" << std::endl;
		std::cerr << "You need to enter in order the filename, the first string and the second string" << std::endl;
		return 1;
	}
	if (files.open_files(argv) == false) {
		return 1;
	}
	files.copy_and_replace(argv);
	return 0;
}
