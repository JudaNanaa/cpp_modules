/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:01:13 by madamou           #+#    #+#             */
/*   Updated: 2024/09/30 22:34:44 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iterator>

HumanB::HumanB(std::string name) : _name(name) {
	this->_weapon = new Weapon("basic");
	
}

HumanB::HumanB(std::string name, Weapon &weapon) : _name(name) , _weapon(&weapon){
}

HumanB::~HumanB(void) {
	
}

void HumanB::attack(void) const {
	std::cout << this->_name << " attacks with their " 
		<< this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	delete this->_weapon;
	this->_weapon = &weapon;
}