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

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog : Default constructor called" << std::endl;	
	_type = "Dog";
}

Dog::Dog(const Dog& x) : Animal(x)
{
	std::cout << "Dog : Copy constructor called" << std::endl;	
	*this = x;
}

Dog& Dog::operator=(const Dog& x)
{
	std::cout << "Dog : Copy assignment operator called" << std::endl;
	if (this != &x)
		Animal::operator=(x);
	return (*this);	
}

Dog::~Dog(void)
{
	std::cout << "Dog : Destructor called" << std::endl;	
}

void	Dog::makeSound(void) const
{
	std::cout << "Bow wow!!!!" << std::endl;	
}
