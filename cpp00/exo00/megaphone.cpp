/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:55:21 by madamou           #+#    #+#             */
/*   Updated: 2024/10/08 18:10:08 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		for (int index = 1; argv[index]; index++) {
			for (int i = 0; argv[index][i]; i++) {
				std::cout << (char)std::toupper(argv[index][i]);
			}
		}
		std::cout << std::endl;
	}
	return 0;
}