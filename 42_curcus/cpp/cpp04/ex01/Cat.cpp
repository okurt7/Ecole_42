#include "Cat.h"

Cat::Cat() {
	this->type = "Cat";
	brain = new Brain();
	cout << "Cat Constructor called" << endl;
}

Cat::Cat(const Cat &other) {
	*this = other;
	cout << "Cat Copy Constructor called" << endl;
}

Cat &Cat::operator=(const Cat &other) {
	this->type = other.type;
	this->brain = new Brain();
	*(this->brain) = *(other.brain);
	cout << "Cat Assigment Operator called" << endl;
	return *this;
}

Cat::~Cat() {
	delete brain;
	cout << "Cat Destructor called" << endl;
}

void Cat::makeSound() const{
	cout << "Cat meow meow" << endl;
}
