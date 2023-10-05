#ifndef DOG_H
#define DOG_H

#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(Dog const & src);
        ~Dog();
        
        Dog &     operator=(Dog const & rhs);
		void makeSound() const;
    private:

};

#endif