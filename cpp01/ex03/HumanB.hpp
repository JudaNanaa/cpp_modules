/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:50:08 by madamou           #+#    #+#             */
/*   Updated: 2024/09/30 00:01:25 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"


class HumanB {
	private:
		Weapon _weapon;
		std::string _name;		

	public:
		void attack(void) const;
		HumanB();
		~HumanB();

};

#endif