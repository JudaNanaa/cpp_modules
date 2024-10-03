#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
  private:
    int _value;
    int const _bits;

  public:
    Fixed(void);
    Fixed(Fixed &to_copy);
    ~Fixed(void);
    Fixed &operator=(Fixed &to_copy);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
