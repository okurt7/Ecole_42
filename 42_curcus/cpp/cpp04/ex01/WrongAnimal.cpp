#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() {
	this->type = "WrongAnimal";
	cout << "WrongAnimal Constructor called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	*this = other;
	cout << "WrongAnimal Copy Constructor called" << endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	this->type = other.type;
	cout << "WrongAnimal Assigment Operator called" << endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	cout << "WrongAnimal Destructor called" << endl;
}

string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	cout << "Wrong Animal sound" << endl;
}

