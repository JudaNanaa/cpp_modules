/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:42:17 by madamou           #+#    #+#             */
/*   Updated: 2024/10/23 10:21:34 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain *brain;
	public:
		Dog();
		Dog(Dog const &to_copy);
		~Dog();
		Dog &operator=(Dog const &to_affect);
		void makeSound(void) const;
		std::string getIdeas(int i) const;
        void inception(std::string idea, int i);
};

#endif