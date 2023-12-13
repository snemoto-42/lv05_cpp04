/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 17:05:47 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("default")
{
	std::cout << "WrongAnimal : Default constructor called" << std::endl;	
}

WrongAnimal::WrongAnimal(const WrongAnimal& x)
{
	std::cout << "WrongAnimal : Copy constructor called" << std::endl;	
	*this = x;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& x)
{
	std::cout << "WrongAnimal : Copy assignment operator called" << std::endl;
	if (this != &x)
		_type = x._type;
	return (*this);	
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal : Destructor called" << std::endl;	
}

const std::string&	WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "No wrong animal aroud here" << std::endl;	
}
