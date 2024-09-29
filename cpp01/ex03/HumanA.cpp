/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 00:01:33 by madamou           #+#    #+#             */
/*   Updated: 2024/09/30 00:04:18 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iterator>

HumanA::HumanA(void) {
	
}

HumanA::~HumanA(void) {
	
}

void HumanA::attack(void) const {
	std::cout << this->_name << " attacks with their " 
		<< this->_weapon.getType() << std::endl;
}