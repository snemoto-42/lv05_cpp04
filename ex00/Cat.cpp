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

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat : Default constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& x)
{
	std::cout << "Cat : Copy constructor called" << std::endl;	
	*this = x;
}

Cat& Cat::operator=(const Cat& x)
{
	std::cout << "Cat : Copy assignment operator called" << std::endl;
	if (this != &x)
		_type = x._type;
	return (*this);	
}

Cat::~Cat(void)
{
	std::cout << "Cat : Destructor called" << std::endl;	
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!!!!" << std::endl;	
}
