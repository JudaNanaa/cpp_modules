/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:42:02 by madamou           #+#    #+#             */
/*   Updated: 2024/10/05 19:29:04 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() {
	this->type = "Cat";	
}

Cat::Cat(Cat &to_copy) {
	*this = to_copy;
}

Cat::~Cat() {
	
}

Cat Cat::operator=(Cat to_affect) {
	this->type = to_affect.type;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "The " << this->type << " make sound" << std::endl;
}
