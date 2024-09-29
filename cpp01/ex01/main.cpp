/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:40:00 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 23:33:51 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	int nb = 10;
	Zombie *Foo = zombieHorde(nb, "Idrissa");
	
	for (int i = 0; i < nb; i++) {
		Foo[i].announce();
	}
	delete[] Foo;
	Foo = NULL;
	nb = 20;
	Foo = zombieHorde(nb, "Moussaa");
	for (int i = 0; i < nb; i++) {
		Foo[i].announce();
	}
	delete[] Foo;
	return (0);	
}
