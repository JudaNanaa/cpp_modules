/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:13:18 by madamou           #+#    #+#             */
/*   Updated: 2024/10/03 19:02:40 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
  private:
    int const _bits;
    int _value;

  public:
    // Constructors
    Fixed(void);
    Fixed(int const value);
    Fixed(float const value);
    Fixed(Fixed const &to_copy);
    // Deconstructor
    ~Fixed(void);
    // Operator overloading
    Fixed &operator=(Fixed const &to_copy);
    bool operator>(Fixed const &to_compare) const;
    bool operator<(Fixed const &to_compare) const;
    bool operator>=(Fixed const &to_compare) const;
    bool operator<=(Fixed const &to_compare) const;
    bool operator==(Fixed const &to_compare) const;
    bool operator!=(Fixed const &to_compare) const;
    Fixed operator+(Fixed const &to_add);
    Fixed operator-(Fixed const &to_remove);
    Fixed operator*(Fixed const &to_multiply);
    Fixed operator/(Fixed const &to_divide);
    Fixed operator++(void);
    Fixed operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);
    // Public Functions
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
    static Fixed &min(Fixed &a, Fixed  &b);
    static Fixed const &min(Fixed const &a, Fixed const &b);
    static Fixed &max(Fixed &a, Fixed  &b);
    static Fixed const &max(Fixed const &a, Fixed const &b);
};
#endif
