#ifndef CAT_H
#define CAT_H

#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat: public AAnimal
{
    public:
        Cat();
        Cat(Cat const & src);
		Cat(std::string name);
        ~Cat();
        
        Cat &     operator=(Cat const & rhs);
		void makeSound() const;
		Brain &getBrain() const;
    private:
		Brain* _brain;
};

#endif