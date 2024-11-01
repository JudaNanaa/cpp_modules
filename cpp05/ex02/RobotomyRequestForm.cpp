/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:40:47 by madamou           #+#    #+#             */
/*   Updated: 2024/11/01 21:22:54 by madamou          ###   ########.fr       */
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

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
	: AForm(other.getName(), 72, 45) {
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &to_copy) {
	AForm::operator=(to_copy);
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (this->getSigned() == false) {
		throw AForm::FormNotSignedException();
	}
	if (executor.getGrade() > this->getGradeExecute()) {
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << "Some drilling noise !!" << std::endl;
	if (std::rand() % 2 == 0) {
		throw RobotomyRequestForm::Robotomizefailed();
	}
	std::cout << this->getName() << " has been robotomized successfully !!" << std::endl;
}