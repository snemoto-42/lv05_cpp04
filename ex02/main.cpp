/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/14 22:34:50 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "\n<<< ex01 >>>" << std::endl;
	std::cout << "\n<<< My test >>>" << std::endl;
	{
		const int 	arraySize = 10;
		Animal*		animalArray[arraySize];

		for (unsigned int i = 0; i < arraySize / 2; ++i)
		{
			animalArray[i] = new Dog();
			animalArray[i + arraySize / 2] = new Cat();
		} 
		for (unsigned int i = 0; i < arraySize; ++i)
		{
			delete animalArray[i];
		} 
	}
	std::cout << "\n--- for Copy Dog ---" << std::endl;
	{
		const Dog* originalDog = new Dog("Original Dog Idea");
		originalDog->announceBrainIdea();

		const Dog* copiedDog = new Dog(*originalDog);
		copiedDog->announceBrainIdea();

		delete originalDog;
		delete copiedDog;
	}
	std::cout << "\n--- for Copy Cat ---" << std::endl;
	{
		const Cat* originalCat = new Cat("Original Cat Idea");
		originalCat->announceBrainIdea();

		const Cat* copiedCat = new Cat(*originalCat);
		copiedCat->announceBrainIdea();

		delete originalCat;
		delete copiedCat;
	}
	std::cout << "\n<<< ex00 >>>" << std::endl;
	std::cout << "\n<<< Sample test >>>" << std::endl;
	{
		// const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound();
		j->makeSound();
		// meta->makeSound();

		// delete meta;
		delete j;
		delete i;
	}
	std::cout << "\n<<< My test >>>" << std::endl;
	std::cout << "\n--- for Copy ---" << std::endl;
	{
		const Dog* original = new Dog();
		const Dog* copied = new Dog(*original);

		std::cout << copied->getType() << std::endl;
		copied->makeSound();

		delete original;
		delete copied;
	}
	std::cout << "\n--- for WrongAnimal---" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;

		i->makeSound();
		meta->makeSound();

		delete meta;
		delete i;

	}
	std::cout << "\n--- for Copy ---" << std::endl;
	{
		const WrongCat* original = new WrongCat();
		const WrongCat* copied = new WrongCat(*original);

		std::cout << copied->getType() << std::endl;
		copied->makeSound();

		delete original;
		delete copied;
	}
	return 0;
}

#include <libc.h>
__attribute__((destructor))
static void destructor() {
std::cout << "\n";
system("leaks -q animal");
}
