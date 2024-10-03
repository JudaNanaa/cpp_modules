/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:13:16 by madamou           #+#    #+#             */
/*   Updated: 2024/10/03 18:11:39 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {

    ClapTrap first("Moussa");

    first.attack("The corrector");
    first.takeDamage(0);
    first.beRepaired(0);
    return 0;
}
