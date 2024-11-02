/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:41:02 by madamou           #+#    #+#             */
/*   Updated: 2024/11/02 08:17:51 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <ctime>
#include <deque>
#include <exception>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <sys/time.h>
class PmergeMe {
	private:
		std::vector<int> vector;
		std::deque<int> deque;
		std::list<int> list;
		double timeVector;
		double timeList;
		double timeDeque;
		char **argv;
		std::vector<int> sortVector(std::vector<int> &vec);
		std::deque<int> sortDeque(std::deque<int> &vec);
		std::list<int> sortList(std::list<int> &vec);
	public:
		PmergeMe(void);
		~PmergeMe();
		void parseArgs(char **argv);
		void sort(void);
		class ParseErrorException : public std::exception {
			public:
				const char *what() const throw() {
					return "Error";
				}
		};
};

#endif