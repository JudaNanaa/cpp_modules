/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 22:41:08 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 12:21:37 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {
	std::cout << "AMateria Constructor has been called" << std::endl;	
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructor has been called" << std::endl;	
}

std::string const &AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "Default AMateria use member function !!" << std::endl << "Nothing to " << target.getName() << std::endl;
}
