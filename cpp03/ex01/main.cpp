/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:13:16 by madamou           #+#    #+#             */
/*   Updated: 2024/10/04 16:35:38 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Moussa");
    clap.attack("Idrissa");
    clap.takeDamage(30);
    clap.beRepaired(10);
    
    std::cout << std::endl;
    
    ScavTrap scav("The corrector");
    scav.attack("Moulinette");
    scav.takeDamage(40);
    scav.beRepaired(15);
    scav.guardGate();

    return 0;
}

