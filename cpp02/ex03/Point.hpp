/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:13:50 by madamou           #+#    #+#             */
/*   Updated: 2024/10/04 09:24:40 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		Fixed _x;
		Fixed _y;
		
	public:
	// constructors
		Point(void);
		Point(float const x, float const y);
		Point(Point &to_copy);
		Point(Point const &to_copy);
	// destructor
		~Point(void);
	// Operator overloading
		Point operator=(Point &to_affect);
	// Public functions
		int get_orientation_angle(Point const a, Point const m, Point const b);
};

#endif