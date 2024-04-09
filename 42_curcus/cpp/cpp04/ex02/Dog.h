#ifndef _DOG_H_
#define _DOG_H_

#include "Animal.h"
#include "Brain.h"

class Dog : public Animal {
private:
	Brain* brain;

public:
	Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	~Dog();

	void makeSound() const;
};

#endif
