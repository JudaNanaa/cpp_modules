/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:14:53 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 23:24:52 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstddef>

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *dest = new Zombie[N]();
	if (!dest)
		return NULL;
	for (int i = 0; i < N; i++) {
		dest[i].setNameZombie(name);
	}
	return (dest);
}