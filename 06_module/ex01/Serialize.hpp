#ifndef SERIALIZE_H
#define SERIALIZE_H

#pragma once

#include <string>
#include <iostream>
#include <stdint.h>

struct Data
{
	int x;
	void *address;
};

class Serialize
{
    public:
        ~Serialize();
        static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
    private:
		Serialize();
        Serialize(Serialize const & src);
		Serialize &     operator=(Serialize const & rhs);
};

#endif