/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:58:13 by madamou           #+#    #+#             */
/*   Updated: 2024/11/02 08:34:02 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>
#include <cstdlib>
#include <deque>
#include <vector>

PmergeMe::PmergeMe(void) {

}

PmergeMe::~PmergeMe() {

}

bool isInteger(std::string str) {
	for (int i = 0; str[i]; i++) {
		if (i == 0) {
			if ((str[i] < '0' || str[i] > '9') && str[0] != '+')
				return false;
		}
		else {
			if ((str[i] < '0' || str[i] > '9')) {
				return false;
			}
		}
	}
	return true;
}

void PmergeMe::parseArgs(char **argv) {
	for (int i = 1; argv[i]; i++) {
		if (isInteger(argv[i]) == false) {
			throw PmergeMe::ParseErrorException();
		}
		this->vector.push_back(atoi(argv[i]));
		this->deque.push_back(atoi(argv[i]));
		this->list.push_back(atoi(argv[i]));
	}
	this->argv = &argv[1];
}

void PmergeMe::sort(void) {
	struct timeval start, end;
	
	gettimeofday(&start, 0);
	this->vector = this->sortVector(this->vector);
	gettimeofday(&end, 0);
	long seconds = end.tv_sec - start.tv_sec;
	long microseconds = end.tv_usec - start.tv_usec;
	this->timeVector = seconds + microseconds * 1e-6;
	
	gettimeofday(&start, 0);
	this->deque = this->sortDeque(this->deque);
	gettimeofday(&end, 0);
	seconds = end.tv_sec - start.tv_sec;
	microseconds = end.tv_usec - start.tv_usec;
	this->timeDeque = seconds + microseconds * 1e-6;

	gettimeofday(&start, 0);
	this->list = this->sortList(this->list);
	gettimeofday(&end, 0);
	seconds = end.tv_sec - start.tv_sec;
	microseconds = end.tv_usec - start.tv_usec;
	this->timeList = seconds + microseconds * 1e-6;	
	std::cout << "Before: ";
	int i = 0;
	while (this->argv[i] && i < 5) {
		std::cout << this->argv[i] << " ";
		i++;
	}
	if (this->argv[i]) {
		std::cout << "[...]";
	}
	std::cout << std::endl;
	i = 0;
	std::cout << "After:  ";
	std::vector<int>::iterator itEnd;
	std::vector<int>::iterator it;
	for (it = this->vector.begin(), itEnd = this->vector.end(); it != itEnd && i < 5; it++, i++) {
		std::cout << this->vector[i] << " ";
	}
	if (this->vector.size() > 5) {
		std::cout << "[...]";
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << this->vector.size() << " elements with std::vector : " << this->timeVector << " sec" << std::endl;
	std::cout << "Time to process a range of " << this->deque.size() << " elements with std::deque : " << this->timeDeque << " sec" << std::endl;
	std::cout << "Time to process a range of " << this->list.size() << " elements with std::list : " << this->timeList << " sec" << std::endl;
}

std::vector<int> PmergeMe::sortVector(std::vector<int> &vec) {
	// We need to make pairs of int
	std::vector<int> biggest;
	std::vector<int> smallest;
	
	std::vector<int>::iterator end;
	std::vector<int>::iterator it;

	biggest.reserve(vec.size() / 2);
	if (vec.size() % 2 == 1) {
		smallest.reserve(vec.size());
	}
	else {
		smallest.reserve(vec.size() / 2);
	}
	for (it = vec.begin(), end = vec.end(); it != end;) {
		int first = *it;
		++it;
		
		if (it == end) {
			smallest.push_back(first);
		} else {
			int second = *it;
			++it;
			
			biggest.push_back(std::max(first, second));
			smallest.push_back(std::min(first, second));
		}
	}
	
	// if one pair, return
	if (smallest.size() == 1) {
		if (biggest.empty() == false) {
			smallest.push_back(biggest[0]);
		}
		return smallest;
		
	}
	
	// else take the bigest of each pair and recall the function
	biggest = PmergeMe::sortVector(biggest);
	
	// insert the smallest of each pair in the new vector
	std::vector<int>::iterator toInsert;
	for (it = smallest.begin(), end = smallest.end(); it != end; it++) {
		toInsert = std::lower_bound(biggest.begin(), biggest.end(), *it);
		biggest.insert(toInsert, *it);
	}
	return biggest;
}

std::deque<int> PmergeMe::sortDeque(std::deque<int> &vec) {
	// We need to make pairs of int
	std::deque<int> biggest;
	std::deque<int> smallest;
	
	std::deque<int>::iterator end;
	std::deque<int>::iterator it;

	for (it = vec.begin(), end = vec.end(); it != end;) {
		int first = *it;
		++it;
		
		if (it == end) {
			smallest.push_back(first);
		} else {
			int second = *it;
			++it;

			biggest.push_back(std::max(first, second));
			smallest.push_back(std::min(first, second));
		}
	}
	
	// if one pair, return
	if (smallest.size() == 1) {
		if (biggest.empty() == false) {
			smallest.push_back(biggest[0]);
		}
		return smallest;
		
	}
	
	// else take the bigest of each pair and recall the function
	biggest = PmergeMe::sortDeque(biggest);
	
	// insert the smallest of each pair in the new deque
	std::deque<int>::iterator toInsert;
	for (it = smallest.begin(), end = smallest.end(); it != end; it++) {
		toInsert = std::lower_bound(biggest.begin(), biggest.end(), *it);
		biggest.insert(toInsert, *it);
	}
	return biggest;
}

std::list<int> PmergeMe::sortList(std::list<int> &vec) {
	// We need to make pairs of int
	std::list<int> biggest;
	std::list<int> smallest;
	
	std::list<int>::iterator end;
	std::list<int>::iterator it;

	for (it = vec.begin(), end = vec.end(); it != end;) {
		int first = *it;
		++it;
		
		if (it == end) {
			smallest.push_back(first);
		} else {
			int second = *it;
			++it;

			biggest.push_back(std::max(first, second));
			smallest.push_back(std::min(first, second));
		}
	}
	
	// if one pair, return
	if (smallest.size() == 1) {
		if (biggest.empty() == false) {
			smallest.push_back(biggest.front());
		}
		return smallest;
		
	}
	
	// else take the bigest of each pair and recall the function
	biggest = PmergeMe::sortList(biggest);
	
	// insert the smallest of each pair in the new list
	std::list<int>::iterator toInsert;
	for (it = smallest.begin(), end = smallest.end(); it != end; it++) {
		toInsert = std::lower_bound(biggest.begin(), biggest.end(), *it);
		biggest.insert(toInsert, *it);
	}
	return biggest;
}