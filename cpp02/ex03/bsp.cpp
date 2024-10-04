/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:13:43 by madamou           #+#    #+#             */
/*   Updated: 2024/10/04 09:25:01 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int Point::get_orientation_angle(Point const a, Point const m, Point const b) {
	Fixed result;
	Fixed ax(a._x);
	Fixed ay(a._y);
	Fixed mx(m._x);
	Fixed my(m._y);
	Fixed bx(b._x);
	Fixed by(b._y);

	result = (ax - mx) * (by - my) - (ay - my) *(bx - mx);
	if (result.toFloat() >= 0) {
		return 1;
	}
	return -1;
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	int tab_result[3];
	Point n;

	tab_result[0] = n.get_orientation_angle(a, point, b);
	tab_result[1] = n.get_orientation_angle(b, point, c);
	tab_result[2] = n.get_orientation_angle(c, point, a);
	if (tab_result[0] == tab_result[1] == tab_result[2])
		return true;
	return false;
}