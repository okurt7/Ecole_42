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

    bool operator>(Fixed const &other);
	bool operator<(Fixed const &other);
	bool operator>=(Fixed const &other);
	bool operator<=(Fixed const &other);
	bool operator==(Fixed const &other);
	bool operator!=(Fixed const &other);

	Fixed operator+(Fixed const &other);
	Fixed operator-(Fixed const &other);
	Fixed operator*(Fixed const &other);
	Fixed operator/(Fixed const &other);

	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed& min(Fixed& fixedA, Fixed& fixedB);
	static const Fixed& min(Fixed const &fixedA, Fixed const &fixedB);
	static Fixed& max(Fixed& fixedA, Fixed& fixedB);
	static const Fixed& max(Fixed const &fixedA, Fixed const &fixedB);

};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
