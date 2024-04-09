#include "Dog.h"

Dog::Dog() {
	this->type = "Dog";
	cout << "Dog Constructor called" << endl;
}

Dog::Dog(const Dog &other) {
	*this = other;
	cout << "Dog Copy Constructor called" << endl;
}

Dog &Dog::operator=(const Dog &other) {
	this->type = other.type;
	cout << "Dog Assigment Operator called" << endl;
	return *this;
}

void Dog::makeSound() const {
	cout << "Dog bark bark" << endl;
}

Dog::~Dog() {
	cout << "Dog Destructor called" << endl;
}
