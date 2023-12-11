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

Animal::Animal(void)
{
	std::cout << "Animal : Default constructor called\n";	
}

Animal::Animal(const Animal& x)
{
	std::cout << "Animal : Copy constructor called\n";	
	*this = x;
}

Animal& Animal::operator=(const Animal& x)
{
	std::cout << "Animal : Copy assignment operator called\n";
	if (this != &x)
		Animal();
	return (*this);	
}

Animal::~Animal(void)
{
	std::cout << "Animal : Destructor called\n";	
}

const std::string&	Animal::getType(void)
{
	return (_type);
}

void				Animal::makeSound(void)
{
	std::cout << "Animal : makeSound function called\n";	
}
