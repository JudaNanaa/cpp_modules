/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:13:12 by madamou           #+#    #+#             */
/*   Updated: 2024/10/03 19:02:27 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
// Deconstructor
Fixed::~Fixed(void) {
}

// Constructors
Fixed::Fixed(void) : _bits(8), _value(0) {
	
}

Fixed::Fixed(int const value) : _bits(8),_value(value * (1 << this->_bits)){
	
}

Fixed::Fixed(float const value) : _bits(8), _value(value * (1 << this->_bits)){

}

Fixed::Fixed(Fixed const &to_copy) : _bits(to_copy._bits), _value(to_copy._value) {
	
}

// Operators Overloading
Fixed &Fixed::operator=(Fixed const &to_copy) {
	this->_value = to_copy._value;
	return *this;
}

bool Fixed::operator>(Fixed const &to_compare) const {
	return this->_value > to_compare._value;
}

bool Fixed::operator<(Fixed const &to_compare) const {
	return this->_value < to_compare._value;
}

bool Fixed::operator>=(Fixed const &to_compare) const {
	return this->_value >= to_compare._value;
}

bool Fixed::operator<=(Fixed const &to_compare) const {
	return this->_value <= to_compare._value;
}

bool Fixed::operator==(Fixed const &to_compare) const {
	return this->_value == to_compare._value;
}

bool Fixed::operator!=(Fixed const &to_compare) const {
	return this->_value != to_compare._value;
}

Fixed Fixed::operator+(Fixed const &to_add) {
	this->_value += to_add._value;
	return *this;
}

Fixed Fixed::operator-(Fixed const &to_remove) {
	this->_value -= to_remove._value;
	return *this;
}

Fixed Fixed::operator*(Fixed const &to_multiply) {
	this->_value *= to_multiply._value / (1 << this->_bits);
	return *this;
}

Fixed Fixed::operator/(Fixed const &to_divide) {
	this->_value /= to_divide._value / (1 << this->_bits);
	return *this;
}

Fixed Fixed::operator++(void) {
	this->_value++;
	return *this;
}

Fixed Fixed::operator--(void) {
	this->_value--;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed dest = *this;
	++this->_value;
	return dest;
}

Fixed Fixed::operator--(int) {
	Fixed dest = *this;
	--this->_value;
	return dest;	
}

// Public Functions
int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float Fixed::toFloat( void ) const {
	return (float)this->_value / (1 << this->_bits);
}

int Fixed::toInt( void ) const {
	return this->_value >> this->_bits;
}

Fixed &Fixed::min(Fixed &a, Fixed  &b) {
	if (a < b) {
		return a;
	}
	return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
	if (a < b) {
		return a;
	}
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed  &b) {
	if (a > b) {
		return a;
	}
	return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
	if (a > b) {
		return a;
	}
	return b;	
}
