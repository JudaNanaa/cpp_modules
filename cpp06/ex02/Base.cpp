/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:57:30 by madamou           #+#    #+#             */
/*   Updated: 2024/11/02 17:27:54 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base::~Base() {
	
}

Base * generate(void) {
	int value;

	value = std::rand() % 3;
	switch (value) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return NULL;
}

void identify(Base* p) {
	if (dynamic_cast<A *>(p)) {
		std::cout << "the type of this pointer is 'A'" << std::endl;
	}
	else if (dynamic_cast<B *>(p)) {
		std::cout << "the type of this pointer is 'B'" << std::endl;
	}
	else if (dynamic_cast<C *>(p)) {
		std::cout << "the type of this pointer is 'C'" << std::endl;
	}
	else {
		std::cout << "the type of this pointer is unknow" << std::endl;
	}
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        	std::cout << "the type of this reference is 'A'" << std::endl;
    } catch (...) {
        try {
            (void)dynamic_cast<B&>(p);
            std::cout << "the type of this reference is 'B'" << std::endl;
        } catch (...) {
            try {
                (void)dynamic_cast<C&>(p);
                std::cout << "the type of this reference is 'C'" << std::endl;
            } catch (...) {
                std::cout << "the type of this reference is unknow" << std::endl;
            }
        }
    }
}
