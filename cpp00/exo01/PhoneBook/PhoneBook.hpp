/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:25:49 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 18:54:43 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../contact/contact.hpp"

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
	public:
		PhoneBook();
		~PhoneBook();
		void addContact();
		void initPhoneBook();
		void incrementWrite();
		void searchContact();
};

#endif