/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:42:02 by madamou           #+#    #+#             */
/*   Updated: 2024/10/07 19:42:48 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << "Cat Default constructor has been called" << std::endl;
}

Cat::Cat(Cat &to_copy) : Animal(to_copy) {
	std::cout << "Cat Copy constructor has been called" << std::endl;
	*this = to_copy;
}

Cat::~Cat() {
	std::cout << "Cat destructor has been called" << std::endl;
}

Cat Cat::operator=(Cat to_affect) {
	this->type = to_affect.type;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "The " << this->type << " make sound" << std::endl;
}
