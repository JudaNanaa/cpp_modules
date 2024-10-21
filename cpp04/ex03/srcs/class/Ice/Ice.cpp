/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 22:45:43 by madamou           #+#    #+#             */
/*   Updated: 2024/10/21 23:29:09 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

// Default constructor
Ice::Ice() : AMateria("ice"){
	
}

// Copy constructor
Ice::Ice(Ice const &to_copy) : AMateria(to_copy._type){
	
}

// Destructor
Ice::~Ice() {
	
}

// Operator overloading
Ice &Ice::operator=(Ice &to_affect) {
	if (this != &to_affect) {
		this->_type  = to_affect._type;
	}
	return *this;
}

AMateria* Ice::clone() const{
	AMateria *dest = new Ice(*this);
	return dest;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
