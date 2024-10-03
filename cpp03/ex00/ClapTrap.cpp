/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:43:54 by madamou           #+#    #+#             */
/*   Updated: 2024/10/03 18:08:12 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor
ClapTrap::ClapTrap(std::string name)
	: _name(name), _hit_point(10), _energy_point(10), _attack_damage(0) {
	std::cout << "default constructor has been called" << std::endl;
}

// Deconstructor
ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor has been called" << std::endl;
}

// Public Functions
void ClapTrap::attack(const std::string& target) {
	if (this->_energy_point == 0 || this->_hit_point == 0) {
		std::cout << "You can't attack !!" << std::endl;
		return;
	}
	std::cout 
		<< "ClapTrap " 
		<< this->_name 
		<< " attacks " 
		<< target
		<< ", causing " 
		<< this->_attack_damage 
		<< " points of damage!" 
		<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->_hit_point -= amount;
	std::cout 
		<< "ClapTrap " 
		<< this->_name 
		<< " take " 
		<< amount
		<< " points of damage!"
		<< std::endl;
	std::cout
		<< this->_name 
		<< " have now " 
		<< this->_hit_point
		<< " hit points!" 
		<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->_hit_point += amount;
	std::cout 
		<< "ClapTrap " 
		<< this->_name 
		<< " gain " 
		<< amount
		<< " hit points!" 
		<< std::endl;
	std::cout
		<< this->_name 
		<< " have now " 
		<< this->_hit_point
		<< " hit points!" 
		<< std::endl;
}
