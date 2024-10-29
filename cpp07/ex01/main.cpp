/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:00:20 by madamou           #+#    #+#             */
/*   Updated: 2024/10/29 16:05:36 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void printElement(T & element) {
    std::cout << element << " ";
}

template <typename T>
void increment(T& element) {
    element += 1;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string stringArray[] = {"Hello", "world", "from", "iter"};

    std::cout << "Original int array: ";
    iter(intArray, 5, printElement);
    std::cout << std::endl;

    std::cout << "Original double array: ";
    iter(doubleArray, 5, printElement);
    std::cout << std::endl;

    std::cout << "Original string array: ";
    iter(stringArray, 4, printElement);
    std::cout << std::endl;

    std::cout << "\nIncrementing int array: ";
    iter(intArray, 5, increment);
    iter(intArray, 5, printElement);
    std::cout << std::endl;

    std::cout << "Incrementing double array: ";
    iter(doubleArray, 5, increment);
    iter(doubleArray, 5, printElement);
    std::cout << std::endl;

    return 0;
}
