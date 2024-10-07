/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:35:02 by madamou           #+#    #+#             */
/*   Updated: 2024/10/07 19:38:30 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor has been called" << std::endl;	
}

Brain::Brain(Brain &to_copy) {
	*this = to_copy;
	std::cout << "Brain copy constructor has been called" << std::endl;	
}

Brain::~Brain(void) {
	std::cout << "Brain Default constructor has been called" << std::endl;	
}
        
Brain Brain::operator=(Brain to_affect) {
	*this->ideas = *to_affect.ideas;
	return *this;
}

