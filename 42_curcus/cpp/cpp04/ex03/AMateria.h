#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include "ICharacter.h"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const &ref);
        virtual ~AMateria();
        
        std::string const &getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif