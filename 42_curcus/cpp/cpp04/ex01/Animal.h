#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Animal {
protected:
	string type;

public:
	Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();

	virtual void makeSound() const;
	string getType() const;
};

#endif
