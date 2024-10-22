/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:43:56 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 11:11:15 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	protected:
		std::string _name;
		int _hit_point;
		int _energy_point;
		int _attack_damage;
		ClapTrap(std::string name, int hp, int ep, int ad);
	
	public:
		// Constructors
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &to_copy);
		// Deconstructor
		~ClapTrap(void);
		// Opearator Overloading
		ClapTrap &operator=(ClapTrap &claptrap);
		// Public Functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif