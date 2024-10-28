/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:00:23 by madamou           #+#    #+#             */
/*   Updated: 2024/10/28 18:48:56 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream> 
#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>

class ScalarConverter {
	public:
		static void convert(std::string to_convert);
};

#endif