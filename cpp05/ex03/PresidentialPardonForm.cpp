/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:33:23 by madamou           #+#    #+#             */
/*   Updated: 2024/10/27 16:28:55 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("NoName", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
	: AForm(target, 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &PresidentialPardonForm)
	: AForm(PresidentialPardonForm.getName(), 25, 5) {
	this->_signed = PresidentialPardonForm._signed;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &to_copy) {
	this->_signed = to_copy._signed;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (this->_signed == false) {
		throw AForm::FormNotSignedException();
	}
	if (executor.getGrade() > this->_gradeExecute) {
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox !!" << std::endl;
}