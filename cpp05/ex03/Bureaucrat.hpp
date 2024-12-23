/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:14:55 by madamou           #+#    #+#             */
/*   Updated: 2024/10/27 16:25:48 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <ostream>


# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

class AForm;

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(int const grade);
		Bureaucrat(std::string name, int const grade);
		Bureaucrat(Bureaucrat const &bureacrat);

		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &bureacrat);

		std::string getName(void) const;
		int getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(AForm &form);
		void  executeForm(AForm const & form);
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
		friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureacrat);
};



#endif