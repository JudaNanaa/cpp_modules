/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:57:06 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 11:08:52 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

// constructors
FragTrap::FragTrap(void)
	: ClapTrap("Moussa", 100, 100, 30){
	std::cout << "The FragTrap Default constructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name, 100, 100, 30) {
	std::cout << "The FragTrap Parametric constructor has been called" << std::endl;
}

FragTrap::FragTrap(FragTrap &to_copy) {
	std::cout << "The FragTrap Copy constructor has been called" << std::endl;
	*this = to_copy;
}

// destructor
FragTrap::~FragTrap() {
	std::cout << "The FragTrap destructor has been called" << std::endl;
}

// Operator overloading
FragTrap &FragTrap::operator=(FragTrap &FragTrap) {
	std::cout << "The FragTrap Affectation operator has been called" << std::endl;
	this->_name = FragTrap._name;
	this->_hit_point = FragTrap._hit_point;
	this->_energy_point = FragTrap._energy_point;
	this->_attack_damage = FragTrap._attack_damage;
	return *this;
}

// Public functions
void FragTrap::highFivesGuys(void) {
	std::cout << "This FragTrap is request to you a high five !!" << std::endl;
}
