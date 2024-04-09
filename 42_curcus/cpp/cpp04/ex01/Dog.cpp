#include "Dog.h"

Dog::Dog() {
	this->type = "Dog";
	brain = new Brain();
	cout << "Dog Constructor called" << endl;
}

Dog::Dog(const Dog &other) {
	*this = other;
	cout << "Dog Copy Constructor called" << endl;
}

Dog &Dog::operator=(const Dog &other) {
	this->type = other.type;
	this->brain = new Brain();
	*(this->brain) = *(other.brain);
	cout << "Dog Assigment Operator called" << endl;
	return *this;
}

void Dog::makeSound() const {
	cout << "Dog bark bark" << endl;
}

Dog::~Dog() {
	delete brain;
	cout << "Dog Destructor called" << endl;
}
