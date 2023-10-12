#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#pragma once

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & src);
        ~MateriaSource();
        
        MateriaSource &     operator=(MateriaSource const & rhs);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
    private:
		AMateria *_Materia_tab[4];
};

#endif