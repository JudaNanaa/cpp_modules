/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:41:32 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 23:26:43 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>


class Zombie {
	private:
		std::string _name;
	public:
		void announce(void);
		void setNameZombie(std::string name);
		Zombie();
		~Zombie();
};

Zombie* zombieHorde( int N, std::string name);

#endif