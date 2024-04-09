#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource {
    private:
        AMateria* _materias[4]; 

    public:
        MateriaSource(); 
        ~MateriaSource(); 
        MateriaSource(MateriaSource const & src); 
        MateriaSource & operator=(MateriaSource const & rhs); 

        virtual void learnMateria(AMateria* m); 
        virtual AMateria* createMateria(std::string const & type); 
};

#endif