/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:57:10 by madamou           #+#    #+#             */
/*   Updated: 2024/10/04 15:27:13 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		// constructors
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &to_copy);
		// destructor
		~FragTrap();
		// Operator overloading
		FragTrap operator=(FragTrap &scavrap);
		// Public functions
		void highFivesGuys(void);		
};

#endif