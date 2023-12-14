/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/14 22:46:02 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Animal::Animal(void) : _type("default")
// {
// 	std::cout << RED << "Animal : Default constructor called" << RESET << std::endl;
// }

// Animal::Animal(const Animal& x)
// {
// 	std::cout << RED << "Animal : Copy constructor called" << RESET << std::endl;	
// 	*this = x;
// }

// Animal& Animal::operator=(const Animal& x)
// {
// 	std::cout << RED << "Animal : Copy assignment operator called" << RESET << std::endl;
// 	if (this != &x)
// 		_type = x._type;
// 	return (*this);	
// }

Animal::~Animal(void)
{
	std::cout << RED << "Animal : Destructor called" << RESET << std::endl;	
}

const std::string&	Animal::getType(void) const
{
	return (_type);
}

// void	Animal::makeSound(void) const
// {
// 	std::cout << RED << "No animal aroud here" << RESET << std::endl;	
// }
