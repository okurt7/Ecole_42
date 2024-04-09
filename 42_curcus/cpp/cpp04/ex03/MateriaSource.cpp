#include "MateriaSource.h"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        _materias[i] = nullptr;
    }
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (_materias[i]) {
            delete _materias[i];
        }
    }
}

MateriaSource::MateriaSource(MateriaSource const & src) {
    for (int i = 0; i < 4; i++) {
        if (src._materias[i]) {
            _materias[i] = src._materias[i]->clone();
        } else {
            _materias[i] = nullptr;
        }
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs) {
    if (this != &rhs) {
        for (int i = 0; i < 4; i++) {
            if (_materias[i]) {
                delete _materias[i];
            }
            if (rhs._materias[i]) {
                _materias[i] = rhs._materias[i]->clone();
            } 
            else {
                _materias[i] = nullptr;
            }
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (_materias[i] == nullptr) {
            _materias[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (_materias[i] != nullptr && _materias[i]->getType() == type) {
            return _materias[i]->clone();
        }
    }
    return nullptr;
}
