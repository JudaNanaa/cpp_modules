/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:42:02 by madamou           #+#    #+#             */
/*   Updated: 2024/10/23 10:10:14 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Cat Default constructor has been called" << std::endl;
}

Cat::Cat(Cat const &to_copy) {
	std::cout << "Cat Copy constructor has been called" << std::endl;
	*this = to_copy;
}

Cat::~Cat() {
	std::cout << "Cat destructor has been called" << std::endl;
}

Cat &Cat::operator=(Cat const &to_affect) {
	std::cout << "Cat Affectation operator has been called" << std::endl;
	this->type = to_affect.type;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "The " << this->type << " make sound" << std::endl;
}
