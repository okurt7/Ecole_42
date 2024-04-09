#include "Fixed.h"

const  int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _raw(0) {
    cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed& other){
    cout << "Copy constructor called" << endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed& other) {
    cout << "Copy assigment operator called" << endl;
    if (this == &other)
        return *this;
    this->_raw = other.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    cout << "Destructor called" << endl;
}

int Fixed::getRawBits() const {
    cout << "getRawBits member function called" << endl;
    return _raw;
}

void Fixed::setRawBits(int raw) {
    _raw = raw;
}
