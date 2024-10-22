/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:55:48 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 14:44:16 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"
#include <cstddef>

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource constructor has been called" << std::endl;
	this->initializeStoarge();
}

MateriaSource::MateriaSource(MateriaSource const &to_copy) {
	std::cout << "MateriaSource Copy constructor has been called" << std::endl;
	this->initializeStoarge();
	this->copyStorage(to_copy);
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource Destructor has been called" << std::endl;
	this->clearStorage();
}


MateriaSource &MateriaSource::operator=(MateriaSource const &to_affect) {
	std::cout << "MateriaSource Affectation operation has been called" << std::endl;
	if (this != &to_affect) {
		this->clearStorage();
		this->copyStorage(to_affect);
	}
	return *this;
}

void MateriaSource::clearStorage(void) {
	int i = 0;

    while (i < this->items) {
        if (this->_storage[i] != NULL) {
            delete this->_storage[i];
            this->_storage[i] = NULL;
        }
		i++;
    }
}

void MateriaSource::copyStorage(MateriaSource const &to_copy) {
	int i;

	i = 0;
	while (i < this->items) {
		if (to_copy._storage[i] == NULL) {
			this->_storage[i] = NULL;
		}
		else {
			this->_storage[i] = to_copy._storage[i];
		}
		i++;
	}
}

void MateriaSource::initializeStoarge(void) {
	int i;

	i = 0;
	while (i < this->items) {
		this->_storage[i] = NULL;
		i++;
	}
}

void MateriaSource::learnMateria(AMateria* to_stock) {
	int i = 0;

	while (i < this->items) {
		if (this->_storage[i] == NULL) {
			this->_storage[i] = to_stock->clone();
			std::cout << "Learn a new Materia -> " << this->_storage[i]->getType() << std::endl;
			break;
		}
		i++;
	}
	std::cout << "Can't learn a new Materia !!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i = 0;
	
	while (i < this->items) {
		if (this->_storage[i] != NULL) {
			if (this->_storage[i]->getType() == type) {
				std::cout << "createMateria create a Materia with type " << type << std::endl;
				return this->_storage[i]->clone();
			}
		}
		i++;
	}
	std::cout << "createMateria can't create a Materia with type " << type << "!! Not learn." << std::endl;
	return NULL;
}