/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 22:45:43 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 14:39:11 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

// Default constructor
Ice::Ice() : AMateria("ice"){
	std::cout << "Ice default constructor has been called" << std::endl;
}

// Copy constructor
Ice::Ice(Ice const &to_copy) : AMateria(to_copy._type){
	std::cout << "Ice Copy constructor has been called" << std::endl;
}

// Destructor
Ice::~Ice() {
	std::cout << "Ice Destructor has been called" << std::endl;
}

// Operator overloading
Ice &Ice::operator=(Ice &to_affect) {
	std::cout << "Cure Affectation operation has been called" << std::endl;
	if (this != &to_affect) {
		this->_type  = to_affect._type;
	}
	return *this;
}

AMateria* Ice::clone() const {
	std::cout << "Ice clone method has been called" << std::endl;
	AMateria *dest = new Ice(*this);
	return dest;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
