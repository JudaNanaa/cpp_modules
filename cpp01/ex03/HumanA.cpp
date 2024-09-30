/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 00:01:33 by madamou           #+#    #+#             */
/*   Updated: 2024/09/30 21:32:59 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iterator>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	
}

HumanA::~HumanA(void) {
	
}

void HumanA::attack(void) const {
	std::cout << this->_name << " attacks with their " 
		<< this->_weapon.getType() << std::endl;
}