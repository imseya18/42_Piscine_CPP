#ifndef CURE_H
#define CURE_H

#pragma once

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
class Cure: public AMateria
{
    public:
        Cure();
        Cure(Cure const & src);
        ~Cure();
        
        Cure &     operator=(Cure const & rhs);
		AMateria* clone() const;
		void use(ICharacter& target);
    private:

};

#endif