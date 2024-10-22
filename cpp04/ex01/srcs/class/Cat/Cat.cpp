/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:42:02 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 11:54:35 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal() {
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat Default constructor has been called" << std::endl;
}

Cat::Cat(Cat &to_copy) : Animal() {
	std::cout << "Cat Copy constructor has been called" << std::endl;
	*this = to_copy;
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Cat destructor has been called" << std::endl;
}

Cat &Cat::operator=(Cat const &to_affect) {
	std::cout << "Cat Affectation operator has been called" << std::endl;
	if (this != &to_affect)
	{
		this->type = to_affect.type;
		this->brain = new Brain(*to_affect.brain);
		if (!this->brain)
			std::cout << "impossible to create a brain from the one received as a parameter" << std::endl;
		std::cout << "Cat was copyed with success" << std::endl;		
	}
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "The " << this->type << " make sound" << std::endl;
}


std::string Cat::getIdeas(int i) const {
  return brain->getIdeas(i);
}

void Cat::inception(std::string idea, int i) {
  brain->inception(idea, i);
}