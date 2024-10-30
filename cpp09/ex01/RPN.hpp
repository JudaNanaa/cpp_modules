/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:10:57 by madamou           #+#    #+#             */
/*   Updated: 2024/10/31 00:23:04 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <cstddef>
#include <exception>
#include <iostream>
#include <stack>

class RPN {
	private:
		std::stack<int> stack;
		void addStack(int nb);
		void multiplyTop(void);
		void additionateTop(void);
		void substractTop(void);
		void divideTop(void);
		void isOperator(char c);
	public:
		RPN();
		~RPN();
		void addToCalculator(char c);
		std::size_t getStackLen();
		int getNb();
		class ErrorException : std::exception {
			public:
				const char * what() const throw() {
					return ("Error");
				}
		};
};

#endif