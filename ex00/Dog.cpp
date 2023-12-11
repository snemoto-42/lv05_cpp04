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

Dog::Dog(void)
{
	std::cout << "Dog : Default constructor called\n";	
}

Dog::Dog(const Dog& x)
{
	std::cout << "Dog : Copy constructor called\n";	
	*this = x;
}

Dog& Dog::operator=(const Dog& x)
{
	std::cout << "Dog : Copy assignment operator called\n";
	if (this != &x)
		Dog();
	return (*this);	
}

Dog::~Dog(void)
{
	std::cout << "Dog : Destructor called\n";	
}
