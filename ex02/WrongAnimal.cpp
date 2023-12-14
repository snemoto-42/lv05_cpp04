/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/14 19:42:47 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("default")
{
	std::cout << RED << "WrongAnimal : Default constructor called" << RESET << std::endl;	
}

WrongAnimal::WrongAnimal(const WrongAnimal& x)
{
	std::cout << RED << "WrongAnimal : Copy constructor called" << RESET << std::endl;	
	*this = x;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& x)
{
	std::cout << RED << "WrongAnimal : Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
		_type = x._type;
	return (*this);	
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED << "WrongAnimal : Destructor called" << RESET << std::endl;	
}

const std::string&	WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << RED << "No wrong animal aroud here" << RESET << std::endl;	
}
