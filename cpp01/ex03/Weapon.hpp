/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:48:55 by madamou           #+#    #+#             */
/*   Updated: 2024/09/30 21:17:51 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	private:
		std::string _type;

	public:
		std::string getType() const;
		void setType(std::string type);
		Weapon(std::string type);	
		~Weapon();
};

#endif