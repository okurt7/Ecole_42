#include "Zombie.h"

int main()
{
    Zombie *zombie = newZombie("Onur");
    zombie->announce();

    randomChump("Kurt");
    delete zombie;
}