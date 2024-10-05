/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:03:00 by madamou           #+#    #+#             */
/*   Updated: 2024/10/05 18:04:56 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// Constructor
DiamondTrap::DiamondTrap(void): ClapTrap("NoName_clap_name"), FragTrap(), ScavTrap() {
	this->_name = "NoName";
	this->_hit_point = FragTrap::_hit_point;
	this->_energy_point = ScavTrap::_energy_point;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap Default constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) {
	std::cout << "DiamondTrap Name constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &to_copy) {
	*this = to_copy;
	std::cout << "DiamondTrap Copy constructor has been called" << std::endl;
}

// Destructor
DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor has been called" << std::endl;
}

// Operator overloading
DiamondTrap DiamondTrap::operator=(DiamondTrap DiamondTrap) {
	this->_name = DiamondTrap._name;
	this->_hit_point = DiamondTrap._hit_point;
	this->_energy_point = DiamondTrap._energy_point;
	this->_attack_damage = DiamondTrap._attack_damage;
	return *this;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "My name is " << this->_name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
}
