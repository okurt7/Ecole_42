#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"

int main()
{

	const Animal* animals[4] = {new Cat, new Dog, new Cat, new Dog};

	for (unsigned int i = 0; i < 4; ++i) {
		animals[i]->makeSound();
		delete animals[i];
	}

	Dog basic;
	{
		Dog tmp = basic;
	}
	return 0;
}