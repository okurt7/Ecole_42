#ifndef _CAT_H_
#define _CAT_H_

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal {
private:
	Brain *brain;

public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();
	void makeSound() const;
};

#endif
