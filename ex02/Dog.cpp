/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/14 22:55:25 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << GREEN << "Dog : Default constructor called" << RESET << std::endl;	
	_type = "Dog";

	try
	{
		_brain = new Brain();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::exit(1);
	}
}

Dog::Dog(const std::string& str) : Animal()
{
	std::cout << GREEN << "Dog : Constructor with argments called" << RESET << std::endl;	
	_type = "Dog";

	try
	{
		_brain = new Brain(str);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::exit(1);
	}
}

Dog::Dog(const Dog& x)
{
	std::cout << GREEN << "Dog : Copy constructor called" << RESET << std::endl;	
	*this = x;
}

Dog& Dog::operator=(const Dog& x)
{
	std::cout << GREEN << "Dog : Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
	{
		Animal::operator=(x);
		try
		{
			_brain = new Brain(*x._brain);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			std::exit(1);
		}
	}
	return (*this);	
}

Dog::~Dog(void)
{
	std::cout << GREEN << "Dog : Destructor called" << RESET << std::endl;
	delete _brain;
}

void	Dog::makeSound(void) const
{
	std::cout << GREEN << "Bow wow!!!!" << RESET << std::endl;	
}

void	Dog::announceBrainIdea(void) const
{
	_brain->announce();
}
