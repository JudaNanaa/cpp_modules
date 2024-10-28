/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:41:02 by madamou           #+#    #+#             */
/*   Updated: 2024/10/28 20:18:08 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <time.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main() {
    for (int i = 0; i < 5; ++i) {
        Base* base = generate();

        std::cout << "Identifying using pointer: ";
        identify(base);

        std::cout << "Identifying using reference: ";
        identify(*base);

        delete base;
        std::cout << std::endl;
    }

    return 0;
}