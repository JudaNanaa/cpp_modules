/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 22:45:51 by madamou           #+#    #+#             */
/*   Updated: 2024/10/23 10:26:51 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
	public:
		Ice();
		Ice(std::string const & type);
		Ice(Ice const &to_copy);
		
		~Ice();
		
		Ice &operator=(Ice const &to_affect);

		AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif