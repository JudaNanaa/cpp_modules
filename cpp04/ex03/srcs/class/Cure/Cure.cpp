/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:11:10 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 14:38:07 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

// Default constructor
Cure::Cure() : AMateria("cure"){
	std::cout << "Cure default constructor has been called" << std::endl;
}

// Copy constructor
Cure::Cure(Cure const &to_copy) : AMateria(to_copy._type){
	std::cout << "Cure Copy constructor has been called" << std::endl;
}

// Destructor
Cure::~Cure() {
	std::cout << "Cure Destructor has been called" << std::endl;
}

// Operator overloading
Cure &Cure::operator=(Cure &to_affect) {
	std::cout << "Cure Affectation operation has been called" << std::endl;
	if (this != &to_affect) {
		this->_type  = to_affect._type;
	}
	return *this;
}

AMateria* Cure::clone() const{
	std::cout << "Cure clone method has been called" << std::endl;
	AMateria *dest = new Cure(*this);
	return dest;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}