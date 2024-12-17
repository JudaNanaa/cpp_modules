/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:10:55 by madamou           #+#    #+#             */
/*   Updated: 2024/12/17 14:41:08 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cstddef>

RPN::RPN() {

}

RPN::~RPN() {

}

int isDigits(char c) {
	if (c < '0' || c > '9')
		return false;
	return true;
}

void RPN::additionateTop(void)
{
	int first;
	int second;

	if (this->stack.size() < 2)
		throw RPN::ErrorException();
	
	second = this->stack.top();
	this->stack.pop();
	first = this->stack.top();
	this->stack.pop();
	first = first + second;
	this->stack.push(first);
}

void RPN::substractTop(void) {
	int first;
	int second;
	
	if (this->stack.size() < 2)
		throw RPN::ErrorException();

	second = this->stack.top();
	this->stack.pop();
	first = this->stack.top();
	this->stack.pop();
	first = first - second;
	this->stack.push(first);
}

void RPN::divideTop(void) {
	int first;
	int second;

	if (this->stack.size() < 2)
		throw RPN::ErrorException();
	
	second = this->stack.top();
	this->stack.pop();
	first = this->stack.top();
	this->stack.pop();
	if (second == 0)
		throw RPN::ErrorException();
	first = first / second;
	this->stack.push(first);
}

void RPN::multiplyTop(void) {
	int first;
	int second;
	
	if (this->stack.size() < 2)
		throw RPN::ErrorException();
	
	second = this->stack.top();
	this->stack.pop();
	first = this->stack.top();
	this->stack.pop();
	first = first * second;
	this->stack.push(first);
}

void RPN::isOperator(char c) {
	switch (c) {
		case '+':
			this->additionateTop();
			break;
		case '-':
			this->substractTop();
			break;
		case '*':
			this->multiplyTop();
			break;
		case '/':
			this->divideTop();
			break;
		default:
			throw RPN::ErrorException();
			break;
	}
}

void RPN::addToCalculator(char c) {
	if (isDigits(c) == true)
		this->addStack(c - '0');
	else
		isOperator(c);
}

void RPN::addStack(int nb) {
	this->stack.push(nb);
}

std::size_t RPN::getStackLen(void) {
	return this->stack.size();
}

int RPN::getNb() {
	return this->stack.top();
}