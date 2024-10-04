/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:13:16 by madamou           #+#    #+#             */
/*   Updated: 2024/10/04 15:40:56 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    // Test avec FragTrap
    std::cout << "--- Création de FragTrap ---" << std::endl;
    FragTrap frag("Fraggy");
    frag.attack("enemy");
    frag.takeDamage(50);
    frag.beRepaired(20);
    frag.highFivesGuys();
    std::cout << "--- Destruction de FragTrap ---" << std::endl;
    return 0;
}

