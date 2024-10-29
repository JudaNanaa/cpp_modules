/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:20:23 by madamou           #+#    #+#             */
/*   Updated: 2024/10/29 15:25:07 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// int main( void ) {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }

#include <iostream>
#include <string>
#include "whatever.hpp"

int main() {
    int a = 42, b = 24;
    double x = 3.14, y = 2.71;
    std::string str1 = "hello", str2 = "world";

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    std::cout << "Min of " << a << " and " << b << " is " << ::min(a, b) << std::endl;
    std::cout << "Max of " << a << " and " << b << " is " << ::max(a, b) << std::endl;

    std::cout << "\nBefore swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    std::cout << "Min of " << x << " and " << y << " is " << ::min(x, y) << std::endl;
    std::cout << "Max of " << x << " and " << y << " is " << ::max(x, y) << std::endl;

    std::cout << "\nBefore swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;
    swap(str1, str2);
    std::cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;

    std::cout << "Min of " << str1 << " and " << str2 << " is " << ::min(str1, str2) << std::endl;
    std::cout << "Max of " << str1 << " and " << str2 << " is " << ::max(str1, str2) << std::endl;

    return 0;
}
