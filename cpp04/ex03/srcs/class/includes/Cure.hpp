/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:11:23 by madamou           #+#    #+#             */
/*   Updated: 2024/10/23 10:26:43 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure(std::string const & type);
		Cure(Cure const &to_copy);
		
		~Cure();
		
		Cure &operator=(Cure const &to_affect);

		std::string const &getType() const;
		AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif