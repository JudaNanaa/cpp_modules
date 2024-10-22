/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:34:08 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 11:50:40 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <iostream>

// Constructor
Animal::Animal(void) {
	this->type = "Animal";
	std::cout << "Animal default constructor has been called" << std::endl;
}

Animal::Animal(Animal &to_copy) {
	*this = to_copy;
	std::cout << "Animal copy constructor has been called" << std::endl;
}

// Destructor
Animal::~Animal() {
	std::cout << "Animal destructor has been called" << std::endl;
}

// Operator overloading
Animal &Animal::operator=(Animal to_affect) {
	std::cout << "Animal Affectation operator has been called" << std::endl;
	this->type = to_affect.type;
	return *this;
}


// Public Functions
void Animal::makeSound(void) const {
	std::cout << "Animal make sound" << std::endl;
}

std::string Animal::getType(void) const {
	return this->type;
}