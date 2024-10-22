/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:43:54 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 11:03:40 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// public Constructors
ClapTrap::ClapTrap(void)
	: _name("NoName"), _hit_point(10), _energy_point(10), _attack_damage(0) {
	std::cout << "ClapTrap Default constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hit_point(10), _energy_point(10), _attack_damage(0) {
	std::cout << "ClapTrap Parametric constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &to_copy)
	: _name(to_copy._name), _hit_point(to_copy._hit_point),
	_energy_point(to_copy._energy_point), _attack_damage(to_copy._attack_damage) {
	std::cout << "ClapTrap Copy constructor has been called" << std::endl;
}

// Protected Constructors
ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad)
	: _name(name) , _hit_point(hp),
	_energy_point(ep), _attack_damage(ad) {
	std::cout << "ClapTrap Default constructor has been called" << std::endl;
}

// Deconstructor
ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap Destructor has been called" << std::endl;
}

// Operator overloading
ClapTrap &ClapTrap::operator=(ClapTrap &claptrap) {
	this->_attack_damage = claptrap._attack_damage;
	this->_name = claptrap._name;
	this->_energy_point = claptrap._energy_point;
	this->_hit_point = claptrap._hit_point;
	std::cout << "ClapTrap Affectation operator has been called" << std::endl;
	return *this;
}

// Public Functions
void ClapTrap::attack(const std::string& target) {
	if (this->_energy_point == 0 || this->_hit_point == 0) {
		std::cout << "I can't attack !!" << std::endl;
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
	this->_energy_point -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hit_point <= 0) {
		std::cout << "I can't take any damage because I'm already die !!" << std::endl;
		return;
	}
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
	if (this->_energy_point == 0 || this->_hit_point == 0) {
		std::cout << "I can't be repaired !!" << std::endl;
		return;
	}
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
	this->_energy_point -= 1;
}
