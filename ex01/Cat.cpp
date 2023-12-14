/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/14 22:55:35 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << CYAN << "Cat : Default constructor called" << RESET << std::endl;
	_type = "Cat";

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

Cat::Cat(const std::string& str) : Animal()
{
	std::cout << CYAN << "Cat : Constructor with argments called" << RESET << std::endl;
	_type = "Cat";

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

Cat::Cat(const Cat& x)
{
	std::cout << CYAN << "Cat : Copy constructor called" << RESET << std::endl;	
	*this = x;
}

Cat& Cat::operator=(const Cat& x)
{
	std::cout << CYAN << "Cat : Copy assignment operator called" << RESET << std::endl;
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

Cat::~Cat(void)
{
	std::cout << CYAN << "Cat : Destructor called" << RESET << std::endl;	
	delete _brain;
}

void	Cat::makeSound(void) const
{
	std::cout << CYAN << "Meow!!!!" << RESET << std::endl;	
}

void	Cat::announceBrainIdea(void) const
{
	_brain->announce();
}
