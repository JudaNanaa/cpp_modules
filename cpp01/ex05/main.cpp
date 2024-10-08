/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:40:00 by madamou           #+#    #+#             */
/*   Updated: 2024/10/01 22:00:45 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
    Harl harl;

    // Test pour le niveau DEBUG
    std::cout << "=== Test DEBUG ===" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    // Test pour le niveau INFO
    std::cout << "=== Test INFO ===" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;

    // Test pour le niveau WARNING
    std::cout << "=== Test WARNING ===" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;

    // Test pour le niveau ERROR
    std::cout << "=== Test ERROR ===" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;

    // Test pour un niveau inconnu
    std::cout << "=== Test NIVEAU INCONNU ===" << std::endl;
    harl.complain("UNKNOWN");
    std::cout << std::endl;

    return 0;
}

