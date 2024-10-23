/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:23:16 by madamou           #+#    #+#             */
/*   Updated: 2024/10/23 10:11:45 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string type;
		
	public:
	// Constructor
		Animal();
		Animal(Animal const &to_copy);
	// Destructor
		virtual ~Animal();
	// Operator overloading
		Animal &operator=(Animal const &to_affect);
	// Public functions
		virtual void makeSound(void) const;
		virtual std::string getType(void) const;
};

#endif