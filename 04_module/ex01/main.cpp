#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
int main()
{
	Dog dog;

	dog.getBrain().displayIdeas();
	const Animal *Animal_tab[100];
	for(int i = 0; i < 100; i++)
	{
		if (i < 50)
			Animal_tab[i] = new Cat();
		else
			Animal_tab[i] = new Dog();
	}
	for(int i = 0; i < 100; i++)
	{
		Animal_tab[i]->makeSound();
	}
	for(int i = 0; i < 100; i++)
		delete Animal_tab[i];
	return 0;
}
