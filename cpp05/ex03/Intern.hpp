/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:42:40 by madamou           #+#    #+#             */
/*   Updated: 2024/10/27 17:32:30 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {
	public:
		Intern();
		
		~Intern();
		AForm *makeForm(std::string formName, std::string target);
		class NoFormInDatasetException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return (" match with any form in database !!");
				}
		};
};

#endif