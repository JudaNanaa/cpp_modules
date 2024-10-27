/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:18:25 by madamou           #+#    #+#             */
/*   Updated: 2024/10/27 16:28:51 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTPARDONFORM_HPP
#define PRESIDENTPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &PresidentialPardonForm);
		
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm const &to_copy);
		void execute(Bureaucrat const & executor) const;
};

#endif