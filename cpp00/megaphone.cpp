/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:55:21 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 13:22:30 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void change_argv (char **argv) {
	int index;
	int i;

	index = 1;
	while (argv[index]) {
		i = 0;
		while (argv[index][i]) {
			if (argv[index][i] >= 'a' && argv[index][i] <= 'z')
				argv[index][i] -= 32;
			i++;
		}
		index++;
	}
}

int main(int argc, char **argv)
{
	int index;

	index = 1;
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		change_argv(argv);
		while (argv[index]) {
			std::cout << argv[index];
			index++;
		}
		std::cout << "" << std::endl;
	}
}