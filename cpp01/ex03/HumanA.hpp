/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:54:31 by madamou           #+#    #+#             */
/*   Updated: 2024/09/30 00:00:49 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"


class HumanA {
	private:
		Weapon _weapon;
		std::string _name;		

	public:
		void attack(void) const;
		HumanA();
		~HumanA();

};

#endif