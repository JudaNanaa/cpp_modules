/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:02:07 by madamou           #+#    #+#             */
/*   Updated: 2024/09/30 21:15:14 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	
}

Weapon::~Weapon(void) {
	
}
		
std::string Weapon::getType() const {
	return (this->_type);
}
	
void Weapon::setType(std::string type) {
	this->_type = type;
}