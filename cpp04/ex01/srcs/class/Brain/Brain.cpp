/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:35:02 by madamou           #+#    #+#             */
/*   Updated: 2024/10/08 17:48:19 by madamou          ###   ########.fr       */
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
	std::cout << "Brain destructor has been called" << std::endl;	
}
        
Brain &Brain::operator=(Brain &to_affect) {
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = to_affect.ideas[i];
	}
	return *this;
}

std::string Brain::getIdeas(int i) const {
  if (i > 99)
    return NULL;
  return ideas[i];
}

void Brain::inception(std::string idea, int i) {
  if (i > 99)
    return ;
  this->ideas[i] = idea;
}