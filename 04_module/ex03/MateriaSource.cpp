#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i< 4; i++)
		_Materia_tab[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    *this = src;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_Materia_tab[i] != 0)
			delete _Materia_tab[i];
	}
}

MateriaSource&     MateriaSource::operator=(MateriaSource const & rhs)
{
	for(int i = 0; i < 4; i++)
		_Materia_tab[i] = rhs._Materia_tab[i];
}