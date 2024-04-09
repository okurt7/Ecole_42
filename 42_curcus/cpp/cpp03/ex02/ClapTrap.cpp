#include "ClapTrap.h"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	cout << "ClapTrap constructor called" << endl;
}

ClapTrap::ClapTrap(string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	cout << "ClapTrap constructor called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
	cout << "ClapTrap Copy constructor called" << endl;
	*this = clapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (this == &other)
		return *this;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap() {
	cout << "ClapTrap Destructor called" << endl;
}


void ClapTrap::attack(const string& target) {
	if(this->_energyPoints > 0 && this->_hitPoints > 0){
		cout << "Claptrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << endl;
		this->_energyPoints--;
	}
	else
		cout << "Claptrap " << this->_name << " has no " << (!this->_energyPoints ? "energy" : "hit points") << " left!" << endl;
}


void ClapTrap::takeDamage(unsigned int amount) {
	if(this->_hitPoints > 0){
		cout << "Claptrap " << this->_name << " takes " << amount << " points of damage!" << endl;
		this->_hitPoints -= amount;
	}
	else
		cout << "Claptrap " << this->_name << " has no " << "hit points left!" << endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if(this->_hitPoints > 0 && this->_energyPoints > 0){
		cout << "Claptrap " << this->_name << " is repaired by " << amount << " points!" << endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else
		cout << "Claptrap " << this->_name << " has no " << (!this->_energyPoints ? "energy" : "hit points") << " left!" << endl;
}