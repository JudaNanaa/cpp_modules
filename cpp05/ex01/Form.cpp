/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:39:30 by madamou           #+#    #+#             */
/*   Updated: 2024/10/27 13:26:54 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(int const gradeSign, int const gradeExecute)
	: _name("NoName"), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {
	if (gradeSign < HIGHEST_GRADE || gradeExecute < HIGHEST_GRADE) {
		throw Form::GradeTooHighException();
	}
	if (gradeSign > LOWEST_GRADE || gradeExecute > LOWEST_GRADE)	
		throw Form::GradeTooLowException();
}

Form::Form(std::string name, int const gradeSign, int const gradeExecute)
	: _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute){
	
}

Form::Form(Form const &to_copy)
	: _name(to_copy._name), _signed(to_copy._signed), _gradeSign(to_copy._gradeSign), _gradeExecute(to_copy._gradeExecute) {
	*this = to_copy;
}


Form::~Form() {
	
}

Form &Form::operator=(Form const &other) {
	this->_signed = other._signed;
	return *this;
}


std::string Form::getName(void) const {
	return this->_name;
}

bool		Form::getSigned(void) const {
	return this->_signed;
}

int			Form::getGradeSign(void) const {
	return this->_gradeSign;
}

int			Form::getGradeExecute(void) const {
	return this->_gradeExecute;
}

void		Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "form name : " << form.getName() << std::endl
		<< "Signed ? : " << form.getSigned() << std::endl
		<< "Grade to signed : " << form.getGradeSign() << std::endl
		<< "Grade to execute : " << form.getGradeExecute() << std::endl;
	return os;
}
