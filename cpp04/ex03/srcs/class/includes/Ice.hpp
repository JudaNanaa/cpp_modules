/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 22:45:51 by madamou           #+#    #+#             */
/*   Updated: 2024/10/21 23:40:46 by madamou          ###   ########.fr       */
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
		
		Ice &operator=(Ice &to_affect);

		AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif