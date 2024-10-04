/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:03:00 by madamou           #+#    #+#             */
/*   Updated: 2024/10/04 18:28:18 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"

// Constructor
DiamondTrap::DiamondTrap(void) {
	
}

DiamondTrap::DiamondTrap(std::string name) {
	
}

DiamondTrap::DiamondTrap(DiamondTrap &to_copy) {
	
}

// Destructor
DiamondTrap::~DiamondTrap(void) {
	
}

// Operator overloading
DiamondTrap DiamondTrap::operator=(DiamondTrap DiamondTrap) {
	this->_name = DiamondTrap._name;
	this->_hit_point = FragTrap::_hit_point;
}
