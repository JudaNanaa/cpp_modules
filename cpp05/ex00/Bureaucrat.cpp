/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:34:09 by madamou           #+#    #+#             */
/*   Updated: 2024/10/26 15:01:58 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int const grade) : _name("NoName") {
	if (grade < HIGHEST_GRADE)
		throw GradeTooHighException(); 
	if (grade > LOWEST_GRADE)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(std::string name, int const grade) : _name(name) {
	if (grade < HIGHEST_GRADE)
		throw GradeTooHighException(); 
	if (grade > LOWEST_GRADE)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureacrat)
	: _name(bureacrat._name), _grade(bureacrat._grade) {
}


Bureaucrat::~Bureaucrat() {

}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureacrat) {
	this->_grade = bureacrat._grade;
	return *this;
}


std::string Bureaucrat::getName(void) const {
	return this->_name;	
}

int Bureaucrat::getGrade(void) const {
	return this->_grade;	
}

void Bureaucrat::incrementGrade(void) {
	if (this->_grade - 1 < HIGHEST_GRADE)
		throw GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade(void) {
	if (this->_grade + 1 < LOWEST_GRADE)
		throw GradeTooLowException();
	this->_grade++;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureacrat) {
	os << bureacrat.getName() << ", bureaucrat grade " << bureacrat.getGrade();
	return os;
}