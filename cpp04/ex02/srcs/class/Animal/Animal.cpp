/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:34:08 by madamou           #+#    #+#             */
/*   Updated: 2024/10/23 10:21:52 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <iostream>

//Constructor
Animal::Animal(void) {
	this->type = "NoType";
	std::cout << "Animal default constructor has been called" << std::endl;
}

Animal::Animal(Animal const &to_copy) {
	this->type = to_copy.type;
	std::cout << "Animal copy constructor has been called" << std::endl;
}

// Destructor
Animal::~Animal() {
	std::cout << "Animal destructor has been called" << std::endl;
}

// Public Functions
void Animal::makeSound(void) const {
	std::cout << "Animal make sound" << std::endl;
}

std::string Animal::getType(void) const {
	return this->type;
}