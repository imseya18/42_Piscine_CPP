#ifndef CHARACTER_H
#define CHARACTER_H

#pragma once

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
    public:
        Character();
		Character(std::string name);
        Character(Character const & src);
        ~Character();
        Character &     operator=(Character const & rhs);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

    private:
		bool check_valide_index(int idx);
		std::string _name;
		AMateria *_inventory[4];
};

#endif