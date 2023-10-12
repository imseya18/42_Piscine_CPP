#ifndef BRAIN_H
#define BRAIN_H

#pragma once

#include <string>
#include <iostream>
#include <sstream>

class Brain
{
    public:
        Brain();
		Brain(std::string type);
		Brain(Brain const &src);
		~Brain();
        void displaySpecificIdea(int i);
		void displayIdeas();
        Brain &     operator=(Brain const & rhs);
    private:
		std::string _ideas[100];
};

#endif