/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:13:16 by madamou           #+#    #+#             */
/*   Updated: 2024/10/04 09:27:22 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

std::ostream &operator<<(std::ostream &stream, Fixed const &to_convert) {
    stream << to_convert.toFloat();
    return stream;
}

int main( void ) {
    Point a(1, 1);
    Point b(3, 1);
    Point c(2, 3);
    Point check(2, 2);

    if (bsp(a, b, c, check) == true) {
        std::cout << "Le point fait parti du triangle !!" << std::endl;
    }
    else {
        std::cout << "Le point ne fait pas parti du triangle !!" << std::endl;
    }
    return 0;
}