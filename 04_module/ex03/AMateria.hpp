#ifndef AMATERIA_H
#define AMATERIA_H

#pragma once

#include <string>
#include <iostream>

class AMateria
{
    public:
        AMateria();
		AMateria(std::string const &type);
        AMateria(AMateria const & src);
        ~AMateria();
        AMateria &     operator=(AMateria const & rhs);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		//virtual void use(ICharacter& target);

    protected:
		std::string _type;
};

#endif