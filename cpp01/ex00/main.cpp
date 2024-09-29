/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:40:00 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 23:12:08 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie Foo;
	Zombie *Bar = newZombie("Jean");
	Zombie *test = newZombie("Mohamed");

	randomChump("Idrissa");
	randomChump("Imad");
	Foo.setNameZombie("Moussa");
	Foo.announce();
	delete Bar;
	delete test;
	return (0);	
}