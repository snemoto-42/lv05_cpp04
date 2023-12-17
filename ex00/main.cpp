/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/17 12:37:38 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\n<<< ex00 >>>" << std::endl;
	std::cout << "\n<<< Sample test >>>" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		meta->makeSound();
		j->makeSound();
		i->makeSound();

		delete meta;
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

		WrongCat cat;
		cat.makeSound();

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
