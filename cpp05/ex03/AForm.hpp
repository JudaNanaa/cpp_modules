/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:39:33 by madamou           #+#    #+#             */
/*   Updated: 2024/11/01 21:32:08 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class AForm {
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExecute;
	public:
		AForm(int const gradeSign, int const gradeExecute);
		AForm(std::string const name, int const gradeSign, int const gradeExecute);
		AForm(AForm const &to_copy);
		
		virtual ~AForm();

		AForm &operator=(AForm const &other);
		
		std::string getName(void) const;
		bool		getSigned(void) const;
		int			getGradeSign(void) const;
		int			getGradeExecute(void) const;
		void		beSigned(Bureaucrat const &bureaucrat);
		virtual void		execute(Bureaucrat const & executor) const = 0;
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
		class NotGoodConstructorException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("The grade is too low !!");
				}
		};
		class FormNotSignedException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("The form is not signed !!");
				}
		};
		friend std::ostream &operator<<(std::ostream &os, const AForm &form);
};

#endif