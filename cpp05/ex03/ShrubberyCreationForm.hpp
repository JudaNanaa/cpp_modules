/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:18:25 by madamou           #+#    #+#             */
/*   Updated: 2024/10/27 16:28:46 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &ShrubberyCreationForm);
		
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &to_copy);
		void execute(Bureaucrat const & executor) const;
		class CantOpenFile : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("The form is not signed !!");
				}
		};
};

#endif