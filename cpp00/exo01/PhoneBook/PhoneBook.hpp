/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:25:49 by madamou           #+#    #+#             */
/*   Updated: 2024/10/08 18:14:26 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../Contact/Contact.hpp"

class PhoneBook {
	private:
		Contact _repertoire[8];
		int		_write;
		int 	_nbContact;
		void addFirstName();
		void addLastName();
		void addNickName();
		void addPhoneNumber();
		void addDarkestSecret();
		void printRepertoire();
		void incrementWrite();
	public:
		PhoneBook();
		~PhoneBook();
		void addContact();
		void initPhoneBook();
		void searchContact();
};

#endif