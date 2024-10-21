/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:52:06 by madamou           #+#    #+#             */
/*   Updated: 2024/10/21 23:31:37 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		static const int items = 4;
		AMateria *_inventory[items];
		void initializeInventory(void);
		void clearInventory(void);
		void copyInventory(Character const &to_copy);
	
	public:
		Character();
		Character(std::string name);
		Character(Character const &to_copy);
		
		~Character();

		Character &operator=(Character const &to_affect);
		
		virtual std::string const & getName(void) const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif