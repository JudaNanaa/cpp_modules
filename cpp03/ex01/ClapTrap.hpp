/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:43:56 by madamou           #+#    #+#             */
/*   Updated: 2024/10/03 17:50:13 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string _name;
		int _hit_point;
		int _energy_point;
		int _attack_damage;
	
	public:
		// Constructor
		ClapTrap(std::string name);
		// Deconstructor
		~ClapTrap(void);
		// Public Functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif