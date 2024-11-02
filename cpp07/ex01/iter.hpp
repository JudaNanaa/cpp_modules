/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:30:47 by madamou           #+#    #+#             */
/*   Updated: 2024/11/02 18:38:30 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>
void iter(T *array, std::size_t len, void (*f)(T&)) {
	if (f == NULL || array == NULL) {
		return;
	}
	for (std::size_t i = 0; i < len; i++) {
		f(array[i]);
	}
}
#endif