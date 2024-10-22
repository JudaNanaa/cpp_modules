/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:13:47 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 10:30:05 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Constructors
Point::Point(void)
	: _x(0), _y(0) {
	std::cout << "Default constructor has been called" << std::endl;
}

Point::Point(float const x, float const y) 
	: _x(x), _y(y) {
	std::cout << "Parameter constructor has been called" << std::endl;
	
}

Point::Point(Point &to_copy)
	: _x(to_copy._x), _y(to_copy._y) {
	std::cout << "Copy constructor has been called" << std::endl;
}

Point::Point(Point const &to_copy)
	: _x(to_copy._x), _y(to_copy._y) {
	std::cout << "Copy const constructor has been called" << std::endl;
}

// Destructor
Point::~Point(void) {
	std::cout << "Destructor const constructor has been called" << std::endl;
}

// Operator overloading
Point Point::operator=(Point &to_affect) {
	this->_x = to_affect._x;
	this->_y = to_affect._y;
	std::cout << "Affectation operator has been called" << std::endl;
	return *this;
}
