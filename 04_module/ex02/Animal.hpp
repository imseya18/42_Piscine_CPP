#ifndef ANIMAL_H
#define ANIMAL_H

#pragma once

#include <string>
#include <iostream>
#include "Brain.hpp"

class AAnimal
{
    public:
        AAnimal();
        AAnimal(AAnimal const & src);
        virtual ~AAnimal();
        
        AAnimal &     operator=(AAnimal const & rhs);

		virtual void makeSound() const = 0;
		std::string getType() const;
		void setType(std::string type);
    protected:
		std::string _type;
};

#endif