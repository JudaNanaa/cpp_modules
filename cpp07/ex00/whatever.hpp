/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:13:27 by madamou           #+#    #+#             */
/*   Updated: 2024/10/29 15:22:47 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template  <typename T>
void swap(T &a, T &b) {
	T buff;
	
	buff = a;
	a = b;
	b = buff;
}

template  <typename T>
T const &min(T const &a, T const &b) {
	if (a < b)
		return a;
	return b;
}

template  <typename T>
T const &max(T const &a, T const &b) {
	if (a > b)
		return a;
	return b;
}

#endif