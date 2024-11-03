/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:28:31 by madamou           #+#    #+#             */
/*   Updated: 2024/11/03 14:19:30 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iterator>

Span::Span(unsigned int const n)
	: _max(n) , _nb(0) {
	this->_tab = std::vector<int>();
}

Span::Span(Span const &other)
	: _max(other._max) , _nb(other._nb) {
	this->_tab = std::vector<int>(other._tab);
}

Span::~Span() {
	
}

Span &Span::operator=(Span const &other) {
	this->_max = other._max;
	this->_nb= other._nb;
	this->_tab = std::vector<int>(other._tab);
	return *this;
}

void Span::addNumber(int const nb) {
	if (this->_tab.size() >= this->_max) {
		throw Span::CantAddNumberException();
	}
	this->_tab.push_back(nb);
}

unsigned int Span::shortestSpan() {
	unsigned int span;

	if (this->_tab.size() <= 1) {
		throw Span::CantReturnSpanException();
	}
	std::vector<int>::iterator it = this->_tab.begin();
	std::vector<int>::iterator ite = this->_tab.end();
	
	std::sort(it, ite);
	span = *(it + 1) - *it;
	while (it + 1 != ite) {
		if (static_cast<unsigned int>(*(it + 1) - *it) < span) {
			span = *(it + 1) - *it;
		}
		it++;	
	}
	return span;
}

unsigned int Span::longestSpan() {
	std::vector<int>::const_iterator maxIt;
	std::vector<int>::const_iterator minIt;

	if (this->_tab.size() <= 1) {
		throw Span::CantReturnSpanException();
	}
	maxIt = std::max_element(this->_tab.begin(), this->_tab.end());
	minIt = std::min_element(this->_tab.begin(), this->_tab.end());
	return *maxIt - *minIt;
}
