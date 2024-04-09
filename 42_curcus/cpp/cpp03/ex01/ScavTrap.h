#ifndef _SCAVTRAP_H_
#define _SCAVTRAP_H_

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const string &name);
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);
	~ScavTrap();

	void guardGate();
	void attack(const string &target);
};

#endif
