/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:21:23 by madamou           #+#    #+#             */
/*   Updated: 2024/11/03 14:18:02 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <cstdlib>
#include <typeinfo>
#include <vector>
#include <iterator>
class Span {
	private:
		unsigned int _max;
		unsigned int _nb;
		std::vector<int> _tab;
	public:
		Span(unsigned int const n);
		Span(Span const &other);
		~Span();
		Span &operator=(Span const &other);
		void addNumber(int const nb);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		
		template<typename T>
		void addRange(typename T::iterator begin, typename T::iterator end) {
			int a;
			if (typeid(*begin) != typeid(a)) {
				throw std::exception();
			}
			while (begin != end) {
				addNumber(*begin);
				++begin;
			}
		}
		class CantAddNumberException : public std::exception {
			public:
				const char *what() const throw() {
					return ("Can't add the number !!");
				}
		};
		class CantReturnSpanException : public std::exception {
			public:
				const char *what() const throw() {
					return ("Can't return a span !!");
				}
		};
};

#endif