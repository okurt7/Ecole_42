#include "Cat.h"

Cat::Cat() {
	this->type = "Cat";
	cout << "Cat Constructor called" << endl;
}

Cat::Cat(const Cat &other) {
	*this = other;
	cout << "Cat Copy Constructor called" << endl;
}

Cat &Cat::operator=(const Cat &other) {
	this->type = other.type;
	cout << "Cat Assigment Operator called" << endl;
	return *this;
}

Cat::~Cat() {
	cout << "Cat Destructor called" << endl;
}

void Cat::makeSound() const{
	cout << "Cat meow meow" << endl;
}
