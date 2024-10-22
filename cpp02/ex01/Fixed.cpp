/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:13:12 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 10:06:06 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(void) :_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value) : _value(value * (1 << this->_bits)) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value) :_value(value * (1 << this->_bits)){
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &to_copy) : _value(to_copy._value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &to_copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = to_copy._value;
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float Fixed::toFloat( void ) const {
	std::cout << "toFloat member function called" << std::endl;
	return (float)this->_value / (1 << this->_bits);
}

int Fixed::toInt( void ) const {
	std::cout << "toInt member function called" << std::endl;
	return this->_value >> this->_bits;
}
