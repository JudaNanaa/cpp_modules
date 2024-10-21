/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:55:48 by madamou           #+#    #+#             */
/*   Updated: 2024/10/21 23:53:48 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"
#include <cstddef>

MateriaSource::MateriaSource() {
	this->initializeStoarge();
}

MateriaSource::MateriaSource(MateriaSource const &to_copy) {
	this->initializeStoarge();
	this->copyStorage(to_copy);
}

MateriaSource::~MateriaSource() {
	this->clearStorage();
}


MateriaSource &MateriaSource::operator=(MateriaSource const &to_affect) {
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
			break;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i = 0;
	
	while (i < this->items) {
		if (this->_storage[i] != NULL) {
			if (this->_storage[i]->getType() == type) {
				return this->_storage[i]->clone();
			}
		}
		i++;
	}
	return NULL;
}