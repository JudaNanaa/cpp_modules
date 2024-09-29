/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:32:39 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 18:27:31 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

std::string Contact::getFirstName(void) const {
	return (this->_firstName);
}

std::string Contact::getLastName(void) const {
	return (this->_lastName);
}

std::string Contact::getNickName(void) const {
	return (this->_nickName);
}

std::string Contact::getPhoneNumber(void) const {
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const {
	return (this->_darkestSecret);
}

void Contact::setFirstName(std::string value) {
	this->_firstName = value;
}

void Contact::setLastName(std::string value) {
	this->_lastName = value ;
}

void Contact::setNickName(std::string value) {
	this->_nickName = value ;
}

void Contact::setPhoneNumber(std::string value) {
	this->_phoneNumber = value ;
}

void Contact::setDarkestSecret(std::string value) {
	this->_darkestSecret = value ;
}

Contact::Contact(void) {
	
}

Contact::~Contact(void) {
	
}