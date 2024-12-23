/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:34:08 by madamou           #+#    #+#             */
/*   Updated: 2024/10/23 10:10:30 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include <iostream>

// Constructor
WrongAnimal::WrongAnimal(void) {
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &to_copy) {
	*this = to_copy;
	std::cout << "WrongAnimal copy constructor has been called" << std::endl;
}

// Destructor
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor has been called" << std::endl;
}

// Operator overloading
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &to_affect) {
	std::cout << "WrongAnimal Affectation operator has been called" << std::endl;
	this->type = to_affect.type;
	return *this;
}


// Public Functions
void WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal make sound" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return this->type;
}