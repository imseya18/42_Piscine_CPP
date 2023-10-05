#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const & src);
        virtual ~WrongAnimal();
        
        WrongAnimal &     operator=(WrongAnimal const & rhs);

		void makeSound() const;
		std::string getType() const;
		void setType(std::string type);
		
    protected:
		std::string _type;
};

#endif