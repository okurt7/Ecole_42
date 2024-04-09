#include "ScavTrap.h"

int main()
{
	ScavTrap scavTrap("Onur");

	scavTrap.attack("Kurt");
	scavTrap.guardGate();
	scavTrap.takeDamage(3);
	scavTrap.beRepaired(11);
}