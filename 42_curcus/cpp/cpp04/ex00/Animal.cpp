#include "Animal.h"

Animal::Animal() {
	this->type = "Base";
	cout << "Animal Constructor called" << endl;
}

Animal::Animal(const Animal &other) {
	*this = other;
	cout << "Animal Copy Constructor called" << endl;
}

Animal &Animal::operator=(const Animal &other) {
	this->type = other.type;
	cout << "Animal Assigment Operator called" << endl;
	return *this;
}

Animal::~Animal() {
	cout << "Animal Destructor called" << endl;
}

string Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {

}

