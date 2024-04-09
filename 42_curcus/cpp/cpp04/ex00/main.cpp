#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	wrongCat->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wrongCat;

	return 0;
}