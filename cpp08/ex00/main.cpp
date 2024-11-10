/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:39:45 by madamou           #+#    #+#             */
/*   Updated: 2024/10/29 19:17:45 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    std::vector<int>::const_iterator found = easyfind(vec, 3);
    if (found != vec.end())
        std::cout << "Found value in vector: " << *found << std::endl;
    else
        std::cout << "not found in list" << std::endl;
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);

    std::list<int>::const_iterator found1 = easyfind(lst, 70);
    if (found1 != lst.end())
        std::cout << "Found value in list: " << *found1 << std::endl;
    else
        std::cout << "not found in list" << std::endl;

    return 0;
}

