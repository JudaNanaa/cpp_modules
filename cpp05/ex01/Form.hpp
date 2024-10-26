/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:39:33 by madamou           #+#    #+#             */
/*   Updated: 2024/10/26 18:33:33 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Form {
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExecute;
	public:
		Form(int const gradeSign, int const gradeExecute);
		Form(std::string name, int const gradeSign, int const gradeExecute);
		Form(Form const &to_copy);
		
		~Form();

		Form &operator=(Form const &other);
		
		std::string getName(void) const;
		bool		getSigned(void) const;
		int			getGradeSign(void) const;
		int			getGradeExecute(void) const;
		void		beSigned(Bureaucrat &bureaucrat);
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("The grade is too high !!");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("The grade is too low !!");
				}
		};
		friend std::ostream &operator<<(std::ostream &os, const Form &form);
};

#endif