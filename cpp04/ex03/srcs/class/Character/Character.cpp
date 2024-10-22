/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:22:04 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 14:36:22 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include <ostream>

Character::Character() {
	this->_name = "NoName";
	this->initializeInventory();
	std::cout << "Character Default constructor has been called" << std::endl;
}

Character::Character(std::string name) {
	std::cout << "Character Name constructor has been called" << std::endl;
	this->_name = name;
	this->initializeInventory();
}

Character::Character(Character const &to_copy) {
	std::cout << "Character Copy constructor has been called" << std::endl;
	this->_name = to_copy._name;
	this->initializeInventory();
	this->copyInventory(to_copy);

}


Character::~Character() {
	std::cout << "Character Destructor has been called" << std::endl;
    this->clearInventory();
}

Character &Character::operator=(Character const &to_affect) {
	std::cout << "Character Affectation operator has been called" << std::endl;
	this->_name = to_affect._name;
	this->clearInventory();
	this->copyInventory(to_affect);
	return *this;
}

void Character::copyInventory(Character const &to_copy) {
	int i;

	i = 0;
	while (i < this->items)
	{
		if (to_copy._inventory[i] == NULL) {
			this->_inventory[i] = NULL;
		}
		else {
			this->_inventory[i] = to_copy._inventory[i]->clone();
		}
		i++;
	}
}

void Character::initializeInventory(void) {
	int i;

	i = 0;
	while (i < this->items)
	{
		this->_inventory[i] = NULL;
		i++;
	}
}

void Character::clearInventory() {
    for (int i = 0; i < this->items; i++) {
        if (this->_inventory[i] != NULL) {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
    }
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	int i = 0;

	while (i < this->items) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			std::cout << this->_name << "get a new item -> " << m->getType() << std::endl;
			return;
		}
		i++;
	}
	std::cout << "Can't equip a item for " << this->_name << ". Inventory full !!" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= this->items) {
		std::cout << "Can't unequip beacuse idx not good" << std::endl;
		return;
	}
	if (this->_inventory[idx] == NULL) {
		std::cout << "this emplacement of the array is already empty" << std::endl;
		return;		
	}
	std::cout << this->_name << " unequip a " << this->_inventory[idx]->getType() << std::endl;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= this->items || this->_inventory[idx] == NULL) {
		std::cout << "Can't use beacuse idx not good" << std::endl;
		return;
	}
	if (this->_inventory[idx] == NULL) {
		std::cout << "this emplacement of the array is empty" << std::endl;
		return;
	}
	this->_inventory[idx]->use(target);
}	
