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
	std::cout << "Cat : Default constructor called\n";	
}

Cat::Cat(const Cat& x)
{
	std::cout << "Cat : Copy constructor called\n";	
	*this = x;
}

Cat& Cat::operator=(const Cat& x)
{
	std::cout << "Cat : Copy assignment operator called\n";
	if (this != &x)
		Cat();
	return (*this);	
}

Cat::~Cat(void)
{
	std::cout << "Cat : Destructor called\n";	
}
