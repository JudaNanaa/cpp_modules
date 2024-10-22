/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:13:38 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 10:57:36 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		// constructors
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &to_copy);
		// destructor
		~ScavTrap();
		// Operator overloading
		ScavTrap &operator=(ScavTrap &scavrap);
		// Public functions
		void attack(const std::string& target);
		void guardGate(void);
};

#endif