/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:23:16 by madamou           #+#    #+#             */
/*   Updated: 2024/10/23 10:21:40 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
		
	public:
	// Constructor
		WrongAnimal();
		WrongAnimal(WrongAnimal const &to_copy);
	// Destructor
		~WrongAnimal();
	// Operator overloading
		WrongAnimal &operator=(WrongAnimal const &to_affect);
	// Public functions
		virtual void makeSound(void) const;
		virtual std::string getType(void) const;
};

#endif