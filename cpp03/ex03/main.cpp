/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:13:16 by madamou           #+#    #+#             */
/*   Updated: 2024/10/05 17:59:21 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {

    // Test avec ScavTrap
    std::cout << "--- Création de ScavTrap ---" << std::endl;
    ScavTrap scav("Scavvy");
    scav.attack("target");
    scav.takeDamage(40);
    scav.beRepaired(15);
    scav.guardGate();
    std::cout << "--- Destruction de ScavTrap ---" << std::endl;

    std::cout << std::endl;

    // Test avec FragTrap
    std::cout << "--- Création de FragTrap ---" << std::endl;
    FragTrap frag("Fraggy");
    frag.attack("enemy");
    frag.takeDamage(50);
    frag.beRepaired(20);
    frag.highFivesGuys();
    std::cout << "--- Destruction de FragTrap ---" << std::endl;

    std::cout << std::endl;

    // Test avec DiamondTrap
    std::cout << "--- Création de DiamondTrap ---" << std::endl;
    DiamondTrap diamond("Diamondy");
    diamond.attack("opponent");
    diamond.takeDamage(60);
    diamond.beRepaired(30);
    diamond.guardGate();    // Inherited from ScavTrap
    diamond.highFivesGuys(); // Inherited from FragTrap
    diamond.whoAmI();        // Unique to DiamondTrap
    std::cout << "--- Destruction de DiamondTrap ---" << std::endl;

    return 0;
}

