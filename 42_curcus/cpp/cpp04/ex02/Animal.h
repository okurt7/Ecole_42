#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Animal {
protected:
	string type;
	Animal();
	Animal(const Animal& other);

public:
	Animal& operator=(const Animal& other);
	virtual ~Animal();

	virtual void makeSound() const = 0;
	string getType() const;
};

#endif
