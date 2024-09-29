/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:44:26 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 23:04:49 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <ostream>

Zombie::Zombie(void) {
	
}
		
Zombie::~Zombie(void) {
	std::cout << "Le destructeur a bien detruit le zombie qui s'appelait '"
		<< this->_name << "'" << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setNameZombie(std::string name) {
	this->_name = name;
}