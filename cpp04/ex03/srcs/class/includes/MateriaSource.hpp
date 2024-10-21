/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:49:16 by madamou           #+#    #+#             */
/*   Updated: 2024/10/21 23:50:27 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		static const int items = 4;
		AMateria *_storage[4];
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