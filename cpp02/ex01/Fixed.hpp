/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:13:18 by madamou           #+#    #+#             */
/*   Updated: 2024/10/22 10:04:14 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
  private:
    static int const _bits = 8;
    int _value;

  public:
    Fixed(void);
    Fixed(int const value);
    Fixed(float const value);
    Fixed(Fixed const &to_copy);
    ~Fixed(void);
    Fixed &operator=(Fixed const &to_copy);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
};

#endif
