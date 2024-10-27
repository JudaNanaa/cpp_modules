/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:48:42 by madamou           #+#    #+#             */
/*   Updated: 2024/10/27 18:12:04 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
	
}

Intern::~Intern() {

}

AForm *Intern::makeForm(std::string formName, std::string target) {
	std::string tab[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i;

	i = 0;
	while (i < 3)
	{
		if (tab[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			break;
		}
		i++;
	}
	switch (i) {
		case 0:
			return new ShrubberyCreationForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new PresidentialPardonForm(target);
		default:
			throw Intern::NoFormInDatasetException();
	}
	return NULL;
}
