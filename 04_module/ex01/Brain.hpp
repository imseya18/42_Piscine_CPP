#ifndef BRAIN_H
#define BRAIN_H

#pragma once

#include <string>
#include <iostream>

class Brain
{
    public:
        Brain();
        Brain(Brain const & src);
        ~Brain();
        
        Brain &     operator=(Brain const & rhs);
    private:
		std::string _ideas[100];
};

#endif