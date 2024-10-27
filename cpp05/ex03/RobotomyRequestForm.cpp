/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:40:47 by madamou           #+#    #+#             */
/*   Updated: 2024/10/27 16:28:58 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("NoName", 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
	: AForm(target, 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &RobotomyRequestForm)
	: AForm(RobotomyRequestForm.getName(), 72, 45) {
	this->_signed = RobotomyRequestForm._signed;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &to_copy) {
	this->_signed = to_copy._signed;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (this->_signed == false) {
		throw AForm::FormNotSignedException();
	}
	if (executor.getGrade() > this->_gradeExecute) {
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << "Some drilling noise !!" << std::endl;
	if (std::rand() % 2 == 0) {
		throw RobotomyRequestForm::Robotomizefailed();
	}
	std::cout << this->getName() << " has been robotomized successfully !!" << std::endl;
}