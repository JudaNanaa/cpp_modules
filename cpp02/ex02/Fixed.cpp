/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:13:12 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 10:18:55 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
// Deconstructor
Fixed::~Fixed(void) {
	std::cout << "Destructor has been called !" << std::endl;
}

// Constructors
Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor has been called !" << std::endl;
}

Fixed::Fixed(int const value) :_value(value * (1 << this->_bits)){
	std::cout << "Int constructor has been called !" << std::endl;
	
}

Fixed::Fixed(float const value) : _value(value * (1 << this->_bits)){
	std::cout << "Float constructor has been called !" << std::endl;
}

Fixed::Fixed(Fixed const &to_copy) : _value(to_copy._value) {
	std::cout << "Copy constructor has been called !" << std::endl;
}

// Operators Overloading
Fixed &Fixed::operator=(Fixed const &to_copy) {
	std::cout << "Operator '=' has been called !" << std::endl;
	this->_value = to_copy._value;
	return *this;
}

bool Fixed::operator>(Fixed const &to_compare) const {
	std::cout << "Operator '>' has been called !" << std::endl;
	return this->_value > to_compare._value;
}

bool Fixed::operator<(Fixed const &to_compare) const {
	std::cout << "Operator '<' has been called !" << std::endl;
	return this->_value < to_compare._value;
}

bool Fixed::operator>=(Fixed const &to_compare) const {
	std::cout << "Operator '>=' has been called !" << std::endl;
	return this->_value >= to_compare._value;
}

bool Fixed::operator<=(Fixed const &to_compare) const {
	std::cout << "Operator '<=' has been called !" << std::endl;
	return this->_value <= to_compare._value;
}

bool Fixed::operator==(Fixed const &to_compare) const {
	std::cout << "Operator '==' has been called !" << std::endl;
	return this->_value == to_compare._value;
}

bool Fixed::operator!=(Fixed const &to_compare) const {
	std::cout << "Operator '!=' has been called !" << std::endl;
	return this->_value != to_compare._value;
}

Fixed Fixed::operator+(Fixed const &to_add) {
	std::cout << "Operator '+' has been called !" << std::endl;
	this->_value += to_add._value;
	return *this;
}

Fixed Fixed::operator-(Fixed const &to_remove) {
	std::cout << "Operator '-' has been called !" << std::endl;
	this->_value -= to_remove._value;
	return *this;
}

Fixed Fixed::operator*(Fixed const &to_multiply) {
	std::cout << "Operator '*' has been called !" << std::endl;
	this->_value *= to_multiply._value / (1 << this->_bits);
	return *this;
}

Fixed Fixed::operator/(Fixed const &to_divide) {
	std::cout << "Operator '/' has been called !" << std::endl;
	this->_value /= to_divide._value / (1 << this->_bits);
	return *this;
}

Fixed Fixed::operator++(void) {
	std::cout << "Operator '++a' has been called !" << std::endl;
	++this->_value;
	return *this;
}

Fixed Fixed::operator--(void) {
	std::cout << "Operator '--a' has been called !" << std::endl;
	--this->_value;
	return *this;
}

Fixed Fixed::operator++(int) {
	std::cout << "Operator 'a++' has been called !" << std::endl;
	Fixed dest = *this;
	this->_value++;
	return dest;
}

Fixed Fixed::operator--(int) {
	std::cout << "Operator 'a--' has been called !" << std::endl;
	Fixed dest = *this;
	this->_value--;
	return dest;	
}

// Public Functions
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

Fixed &Fixed::min(Fixed &a, Fixed  &b) {
	std::cout << "min non member function called" << std::endl;
	if (a < b) {
		return a;
	}
	return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
	std::cout << "min non member function called" << std::endl;
	if (a < b) {
		return a;
	}
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed  &b) {
	std::cout << "max non member function called" << std::endl;
	if (a > b) {
		return a;
	}
	return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
	std::cout << "max non member function called" << std::endl;
	if (a > b) {
		return a;
	}
	return b;	
}
