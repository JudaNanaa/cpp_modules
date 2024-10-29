/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:08:06 by madamou           #+#    #+#             */
/*   Updated: 2024/10/29 17:49:03 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <iostream>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


template<typename T>
class Array {
	private:
		T *_elements;
		unsigned int _arraySize;
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &other);
		Array &operator=(const Array &other);
		~Array();
		
		T &operator[](unsigned int index);

		unsigned int size() const;
};

#include "Array.tpp"

#endif