/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:02:42 by madamou           #+#    #+#             */
/*   Updated: 2024/10/05 17:55:59 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string _name;
	public:
		// Constructor
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap &to_copy);
		// Destructor
		~DiamondTrap(void);
		// Operator overloading
		DiamondTrap operator=(DiamondTrap DiamondTrap);
		//Public functions
		using ScavTrap::attack;
		void whoAmI(void);
};

#endif