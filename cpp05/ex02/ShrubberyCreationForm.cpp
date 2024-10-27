/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:19:18 by madamou           #+#    #+#             */
/*   Updated: 2024/10/27 16:29:02 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <ostream>

void printTree(std::ostream &os) {
	os
	<< "        *                *\n"
    << "       ***              ***\n"
    << "      *****            *****\n"
    << "     *******          *******\n"
    << "    *********        *********\n"
    << "   ***********      ***********\n"
    << "  *************    *************\n"
    << "       | |              | |\n"
    << "       | |              | |"
    << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("NoName", 145, 137) {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
	: AForm(target, 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ShrubberyCreationForm)
	: AForm(ShrubberyCreationForm.getName(), 145, 137) {
	this->_signed = ShrubberyCreationForm._signed;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &to_copy) {
	this->_signed = to_copy._signed;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (this->_signed == false) {
		throw AForm::FormNotSignedException();
	}
	if (executor.getGrade() > this->_gradeExecute) {
		throw Bureaucrat::GradeTooLowException();
	}
	std::ofstream outfile;

	outfile.open("_shrubbery");
	if (outfile.fail()) {
		throw ShrubberyCreationForm::CantOpenFile();
	}
    printTree(outfile);
	outfile.close();	
}
