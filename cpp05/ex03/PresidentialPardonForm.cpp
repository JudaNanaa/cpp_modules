/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:33:23 by madamou           #+#    #+#             */
/*   Updated: 2024/10/31 17:41:38 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("NoName", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
	: AForm(target, 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &PresidentialPardonForm)
	: AForm(PresidentialPardonForm.getName(), 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm() {
	
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &to_copy) {
	AForm::operator=(to_copy);
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (this->getSigned() == false) {
		throw AForm::FormNotSignedException();
	}
	if (executor.getGrade() > this->getGradeExecute()) {
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox !!" << std::endl;
}