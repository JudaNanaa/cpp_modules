/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:42:02 by madamou           #+#    #+#             */
/*   Updated: 2024/10/05 19:46:10 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor has been called" << std::endl;
}

WrongCat::WrongCat(WrongCat &to_copy) {
	std::cout << "WrongCat copy constructor has been called" << std::endl;
	*this = to_copy;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor has been called" << std::endl;
}

WrongCat WrongCat::operator=(WrongCat to_affect) {
	this->type = to_affect.type;
	return *this;
}

void WrongCat::makeSound(void) const {
	std::cout << "The " << this->type << " make sound" << std::endl;
}
