/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:11:10 by madamou           #+#    #+#             */
/*   Updated: 2024/10/21 23:30:14 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

// Default constructor
Cure::Cure() : AMateria("cure"){
	
}

// Copy constructor
Cure::Cure(Cure const &to_copy) : AMateria(to_copy._type){
	
}

// Destructor
Cure::~Cure() {
	
}

// Operator overloading
Cure &Cure::operator=(Cure &to_affect) {
	if (this != &to_affect) {
		this->_type  = to_affect._type;
	}
	return *this;
}

AMateria* Cure::clone() const{
	AMateria *dest = new Cure(*this);
	return dest;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}