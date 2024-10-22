/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:14:25 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 11:04:28 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

// constructors
ScavTrap::ScavTrap(void) : ClapTrap("Moussa", 100, 50, 20) {
	std::cout << "ScavTrap default constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap Parametric constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &to_copy) {
	std::cout << "ScavTrap Copy constructor has been called" << std::endl;
	*this = to_copy;
}

// destructor
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor has been called" << std::endl;
}

// Operator overloading
ScavTrap &ScavTrap::operator=(ScavTrap &scavtrap) {
	std::cout << "ScavTrap Affectation operator has been called" << std::endl;
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
