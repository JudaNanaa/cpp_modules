/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:13:47 by madamou           #+#    #+#             */
/*   Updated: 2024/10/04 09:24:53 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Constructors
Point::Point(void)
	: _x(0), _y(0) {
	
}

Point::Point(float const x, float const y) 
	: _x(x), _y(y) {
	
}

Point::Point(Point &to_copy)
	: _x(to_copy._x), _y(to_copy._y) {
	
}

Point::Point(Point const &to_copy)
	: _x(to_copy._x), _y(to_copy._y) {
	
}

// Destructor
Point::~Point(void) {
	
}

// Operator overloading
Point Point::operator=(Point &to_affect) {
	this->_x = to_affect._x;
	this->_y = to_affect._y;
	return *this;
}
