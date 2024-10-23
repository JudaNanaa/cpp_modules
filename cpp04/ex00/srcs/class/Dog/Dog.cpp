/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:42:02 by madamou           #+#    #+#             */
/*   Updated: 2024/10/23 10:10:22 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() {
	this->type = "Dog";	
	std::cout << "Dog default constructor has been called" << std::endl;
}

Dog::Dog(Dog const &to_copy) {
	*this = to_copy;
	std::cout << "Dog copy constructor has been called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor has been called" << std::endl;
}

Dog &Dog::operator=(Dog const &to_affect) {
	std::cout << "Dog Affectation operator has been called" << std::endl;
	this->type = to_affect.type;
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "The " << this->type << " make sound" << std::endl;
}
