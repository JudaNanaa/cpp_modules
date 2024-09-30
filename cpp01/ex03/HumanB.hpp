/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:50:08 by madamou           #+#    #+#             */
/*   Updated: 2024/09/30 22:32:00 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"


class HumanB {
	private:
		std::string _name;		
		Weapon *_weapon;

	public:
		void attack(void) const;
		void setWeapon(Weapon &weapon);
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		~HumanB();

};

#endif