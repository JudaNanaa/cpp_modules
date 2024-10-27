/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:39:30 by madamou           #+#    #+#             */
/*   Updated: 2024/10/27 14:15:33 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(int const gradeSign, int const gradeExecute)
	: _name("NoName"), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {
	if (gradeSign < HIGHEST_GRADE || gradeExecute < HIGHEST_GRADE) {
		throw AForm::NotGoodConstructorException();
	}
	if (gradeSign > LOWEST_GRADE || gradeExecute > LOWEST_GRADE)	
		throw AForm::NotGoodConstructorException();
}

AForm::AForm(std::string name, int const gradeSign, int const gradeExecute)
	: _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute){
	
}

AForm::AForm(AForm const &to_copy)
	: _name(to_copy._name), _signed(to_copy._signed), _gradeSign(to_copy._gradeSign), _gradeExecute(to_copy._gradeExecute) {
	*this = to_copy;
}


AForm::~AForm() {
	
}

AForm &AForm::operator=(AForm const &other) {
	this->_signed = other._signed;
	return *this;
}


std::string AForm::getName(void) const {
	return this->_name;
}

bool		AForm::getSigned(void) const {
	return this->_signed;
}

int			AForm::getGradeSign(void) const {
	return this->_gradeSign;
}

int			AForm::getGradeExecute(void) const {
	return this->_gradeExecute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
    if (this->_signed) {
        std::cout << "AForm " << this->_name << " is already signed." << std::endl;
        return;
    }
    if (bureaucrat.getGrade() > this->_gradeSign)
        throw AForm::GradeTooLowException();
    this->_signed = true;
}


std::ostream &operator<<(std::ostream &os, const AForm &Aform) {
	os << "Aform name : " << Aform.getName() << std::endl
		<< "Signed ? : " << Aform.getSigned() << std::endl
		<< "Grade to signed : " << Aform.getGradeSign() << std::endl
		<< "Grade to execute : " << Aform.getGradeExecute() << std::endl;
	return os;
}
