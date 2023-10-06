#ifndef ANIMAL_H
#define ANIMAL_H

#pragma once

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
    public:
        Animal();
        Animal(Animal const & src);
        virtual ~Animal();
        
        Animal &     operator=(Animal const & rhs);

		virtual void makeSound() const;
		std::string getType() const;
		void setType(std::string type);

    protected:
		std::string _type;
};

#endif