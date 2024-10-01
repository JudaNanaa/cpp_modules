/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:40:00 by madamou           #+#    #+#             */
/*   Updated: 2024/10/01 23:07:36 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    Harl comment;
    
    if (argc != 2) {
        std::cout << "Not good arguments number !! \nYou can't complain too much" << std::endl;
        return 1;
    }
    comment.complain(std::string(argv[1]));
    return 0;
}

