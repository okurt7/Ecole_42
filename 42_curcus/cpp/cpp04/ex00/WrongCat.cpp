#include "WrongCat.h"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	cout << "WrongCat Constructor called" << endl;
}

WrongCat::WrongCat(const WrongCat &other) {
	*this = other;
	cout << "WrongCat Copy Constructor called" << endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	this->type = other.type;
	cout << "WrongCat Assigment Operator called" << endl;
	return *this;
}

WrongCat::~WrongCat() {
	cout << "WrongCat Destructor called" << endl;
}

void WrongCat::makeSound() const{
	cout << "WrongCat meow meow" << endl;
}

