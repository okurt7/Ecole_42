#include "AMateria.h"

AMateria::AMateria()
{
	
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	
}

AMateria::~AMateria()
{
	
}

AMateria::AMateria(AMateria const &ref) : _type(ref._type)
{
	
}

std::string const & AMateria::getType() const
{
	return(this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}
