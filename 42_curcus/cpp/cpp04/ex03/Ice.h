#ifndef ICE_H
#define ICE_H

#include "ICharacter.h"

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(Ice const & src);
        Ice & operator=(Ice const & rhs);
        
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif