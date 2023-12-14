/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/14 19:44:38 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << CYAN << "WrongCat : Default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& x)
{
	std::cout << CYAN << "WrongCat : Copy constructor called" << std::endl;	
	*this = x;
}

WrongCat& WrongCat::operator=(const WrongCat& x)
{
	std::cout << CYAN << "WrongCat : Copy assignment operator called" << std::endl;
	if (this != &x)
		WrongAnimal::operator=(x);
	return (*this);	
}

WrongCat::~WrongCat(void)
{
	std::cout << CYAN << "WrongCat : Destructor called" << std::endl;	
}

void	WrongCat::makeSound(void) const
{
	std::cout << CYAN << "I'm saying Meow!!!!" << std::endl;	
}
