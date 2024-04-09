#ifndef _FIXED_H_
#define _FIXED_H_

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

class Fixed {
private:
    int _raw;
    static const int _fractionalBits;

public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int raw);

    Fixed(const int fixedNumber);
    Fixed(const float fixedNumber);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
