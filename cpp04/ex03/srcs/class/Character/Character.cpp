/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:22:04 by madamou           #+#    #+#             */
/*   Updated: 2024/10/21 23:44:08 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character() {
	this->_name = "NoName";
	this->initializeInventory();
}

Character::Character(std::string name) {
	this->_name = name;
	this->initializeInventory();
}

Character::Character(Character const &to_copy) {
	this->_name = to_copy._name;
	this->initializeInventory();
	this->copyInventory(to_copy);

}


Character::~Character() {
    this->clearInventory();
}

Character &Character::operator=(Character const &to_affect) {
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
			return;
		}
		i++;
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= this->items)
		return;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= this->items || this->_inventory[idx] == NULL)
		return;
	this->_inventory[idx]->use(target);
}	
