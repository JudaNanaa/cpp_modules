/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:25:42 by madamou           #+#    #+#             */
/*   Updated: 2024/11/03 14:14:33 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

template <typename T>
int easyfind(T &a, int integer) {
	typename T::iterator it = a.begin();
	typename T::iterator ite = a.end();
	while (it != ite) {
		if (*it == integer) {
			return *it;
		}
		it++;
	}
	throw std::exception();
	return 0;
}

#endif