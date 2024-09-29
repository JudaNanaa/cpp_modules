/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:55:21 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 18:12:00 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

void toupper_argv(char **argv) {
	for (int index = 1; argv[index]; index++) {
		for (int i = 0; argv[index][i]; i++) {
			argv[index][i] = std::toupper(argv[index][i]);
		}
	}
}

int main(int argc, char **argv)
{
	int index;

	index = 1;
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		toupper_argv(argv);
		while (argv[index]) {
			std::cout << argv[index];
			index++;
		}
		std::cout << "" << std::endl;
	}
}