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

#include "Animal.hpp"

Animal::Animal(void) : _type("default")
{
	std::cout << "Animal : Default constructor called" << std::endl;
}

Animal::Animal(const Animal& x)
{
	std::cout << "Animal : Copy constructor called" << std::endl;	
	*this = x;
}

Animal& Animal::operator=(const Animal& x)
{
	std::cout << "Animal : Copy assignment operator called" << std::endl;
	if (this != &x)
		_type = x._type;
	return (*this);	
}

Animal::~Animal(void)
{
	std::cout << "Animal : Destructor called" << std::endl;	
}

const std::string&	Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "No animal aroud here" << std::endl;	
}
