/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:40:00 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 23:45:43 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "L’adresse de la string 'str' en mémoire est: " << &str << std::endl;
	std::cout << "L’adresse stockée dans stringPTR est: " << stringPTR << std::endl;
	std::cout << "L’adresse stockée dans stringREF est: " << &stringREF << std::endl;

	std::cout << "La valeur de la string est: " << str << std::endl;
	std::cout << "La valeur pointée par stringPTR est: " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF est: " << stringREF << std::endl;	
	return (0);	
}
