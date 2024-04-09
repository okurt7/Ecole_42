#include "Brain.h"

Brain::Brain() {
	cout << "Brain Constructor called" << endl;
}

Brain::Brain(const Brain &other) {
	*this = other;
	cout << "Brain Copy Constructor called" << endl;
}

Brain &Brain::operator=(const Brain &other) {
	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = other.ideas[i];
	}
	cout << "Brain Assigment Operator called" << endl;
	return *this;
}

Brain::~Brain() {
	cout << "Brain Destructor called" << endl;
}
