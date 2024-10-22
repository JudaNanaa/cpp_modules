/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:42:02 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 12:19:51 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal() {
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "Dog default constructor has been called" << std::endl;
}

Dog::Dog(Dog &to_copy) : Animal() {
	*this = to_copy;
	std::cout << "Dog copy constructor has been called" << std::endl;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog destructor has been called" << std::endl;
}

Dog &Dog::operator=(Dog const &to_affect) {
	std::cout << "Dog Affectation operator has been called" << std::endl;
	if (this != &to_affect)
	{
		this->type = to_affect.type;
		this->brain = new Brain(*to_affect.brain);
		if (!this->brain)
			std::cout << "impossible to create a brain from the one received as a parameter" << std::endl;
		std::cout << "Dog was copyed with success" << std::endl;		
	}	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "The " << this->type << " make sound" << std::endl;
}

std::string Dog::getIdeas(int i) const {
  return brain->getIdeas(i);
}

void Dog::inception(std::string idea, int i) {
  brain->inception(idea, i);
}