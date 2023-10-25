#include "Serialize.hpp"

Serialize::Serialize()
{

}

Serialize::Serialize(Serialize const & src)
{
    *this = src;
}

Serialize &Serialize::operator=(Serialize const &rhs)
{
	(void)rhs;
	return *this;
}

Serialize::~Serialize()
{

}

uintptr_t Serialize::serialize(Data *ptr)
{
	return uintptr_t(ptr);
}

Data *Serialize::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
