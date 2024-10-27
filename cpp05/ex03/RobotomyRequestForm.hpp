/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:18:25 by madamou           #+#    #+#             */
/*   Updated: 2024/10/27 16:28:38 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &RobotomyRequestForm);
		
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm const &to_copy);
		void execute(Bureaucrat const & executor) const ;
		class Robotomizefailed : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("The robotomy failed !!");
				}
		};
};

#endif