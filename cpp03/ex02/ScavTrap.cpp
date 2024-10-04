/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:14:25 by madamou           #+#    #+#             */
/*   Updated: 2024/10/04 18:01:15 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

// constructors
ScavTrap::ScavTrap(void) {
	ScavTrap("Moussa");
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name, 100, 50, 20) {
	
}

ScavTrap::ScavTrap(ScavTrap &to_copy) {
	*this = to_copy;
}

// destructor
ScavTrap::~ScavTrap() {
	
}

// Operator overloading
ScavTrap ScavTrap::operator=(ScavTrap &scavtrap) {
	this->_name = scavtrap._name;
	this->_hit_point = scavtrap._hit_point;
	this->_energy_point = scavtrap._energy_point;
	this->_attack_damage = scavtrap._attack_damage;
	return *this;
}

// Public functions
void ScavTrap::attack(const std::string& target) {
	if (this->_energy_point == 0 || this->_hit_point == 0) {
		std::cout << "I can't attack !!" << std::endl;
		return;
	}
	std::cout 
		<< "ScavTrap " 
		<< this->_name 
		<< " attacks " 
		<< target
		<< ", causing " 
		<< this->_attack_damage 
		<< " points of damage!" 
		<< std::endl;
	this->_energy_point -= 1;
}

void ScavTrap::guardGate(void) {
	std::cout << "This ScavTrap is now in Gate keeper mode !!" << std::endl;
}
