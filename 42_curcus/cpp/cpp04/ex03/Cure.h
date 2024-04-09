#ifndef CURE_H
#define CURE_H

#include "AMateria.h"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(Cure const & src);
        Cure & operator=(Cure const & rhs);
        
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif