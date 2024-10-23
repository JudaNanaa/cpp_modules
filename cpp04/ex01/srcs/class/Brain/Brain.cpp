/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:35:02 by madamou           #+#    #+#             */
/*   Updated: 2024/10/23 10:12:40 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor has been called" << std::endl;	
}

Brain::Brain(Brain const &to_copy) {
	*this = to_copy;
	std::cout << "Brain copy constructor has been called" << std::endl;	
}

Brain::~Brain(void) {
	std::cout << "Brain destructor has been called" << std::endl;
}
        
Brain &Brain::operator=(Brain const &to_affect) {
	for (int i = 0; i < 100; i++) {
	std::cout << "Brain Affectation operator has been called" << std::endl;
		this->ideas[i] = to_affect.ideas[i];
	}
	return *this;
}

std::string Brain::getIdeas(int i) const {
  if (i < 0 || i > 99)
    return NULL;
  return ideas[i];
}

void Brain::inception(std::string idea, int i) {
  if (i < 0 || i > 99)
    return ;
  this->ideas[i] = idea;
}