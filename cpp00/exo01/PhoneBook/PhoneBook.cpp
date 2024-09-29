/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:55:24 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 18:55:19 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "../includes/includes.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook(void) {
	
}

PhoneBook::~PhoneBook(void) {
	
}

void PhoneBook::initPhoneBook(void) {
	this->_write = 0;
	this->_nbContact = 0;
}

void PhoneBook::incrementWrite(void) {
	this->_write += 1;
	if (this->_write == 8)
		this->_write = 0;
}
