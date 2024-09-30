/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:54:31 by madamou           #+#    #+#             */
/*   Updated: 2024/09/30 21:33:06 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"


class HumanA {
	private:
		std::string _name;	
		Weapon &_weapon;

	public:
		void attack(void) const;
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

};

#endif