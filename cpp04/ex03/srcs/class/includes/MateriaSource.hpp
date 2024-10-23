/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:49:16 by madamou           #+#    #+#             */
/*   Updated: 2024/10/23 10:27:44 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

# define STORE 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_storage[STORE];
		void initializeStoarge(void);
		void clearStorage(void);
		void copyStorage(MateriaSource const &to_copy);	
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &to_copy);
	
		~MateriaSource();
		
		MateriaSource &operator=(MateriaSource const &to_affect);
	
		virtual void learnMateria(AMateria* to_stock);
		virtual AMateria* createMateria(std::string const & type);
};

#endif