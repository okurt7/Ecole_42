#ifndef _CAT_H_
#define _CAT_H_

#include "Animal.h"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();
	void makeSound() const;
};

#endif
