#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.h"

class Character : public ICharacter
{
    private:
        std::string _name; 
        AMateria* _inventory[4]; 
    
    public:
        Character(std::string const & name);
        ~Character();
        Character(Character const & src);
        Character & operator=(Character const & rhs);
    
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};


#endif