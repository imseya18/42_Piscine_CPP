#ifndef CAT_H
#define CAT_H

#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(Cat const & src);
        ~Cat();
        
        Cat &     operator=(Cat const & rhs);
		void makeSound() const;
    private:
};

#endif