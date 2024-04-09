#ifndef _WRONGANIMAL_H_
#define _WRONGANIMAL_H_

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class WrongAnimal {
protected:
	string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);
	virtual ~WrongAnimal();

	void makeSound() const;
	string getType() const;
};

#endif
