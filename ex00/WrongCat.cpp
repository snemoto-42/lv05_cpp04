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

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat : Default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& x)
{
	std::cout << "WrongCat : Copy constructor called" << std::endl;	
	*this = x;
}

WrongCat& WrongCat::operator=(const WrongCat& x)
{
	std::cout << "WrongCat : Copy assignment operator called" << std::endl;
	if (this != &x)
		_type = x._type;
	return (*this);	
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat : Destructor called" << std::endl;	
}

void	WrongCat::makeSound(void) const
{
	std::cout << "I'm saying Meow!!!!" << std::endl;	
}
