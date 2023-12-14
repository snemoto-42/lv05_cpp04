/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/14 22:11:40 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << MAGENTA << "Brain : Default constructor called" << RESET << std::endl;
	for (unsigned int idx = 0; idx < 100; idx++)
		_ideas[idx] = "default";
}

Brain::Brain(const std::string& str)
{
	std::cout << MAGENTA << "Brain : Constructor with argments called" << RESET << std::endl;
	for (unsigned int idx = 0; idx < 100; idx++)
		_ideas[idx] = str;
}

Brain::Brain(const Brain& x)
{
	std::cout << MAGENTA << "Brain : Copy constructor called" << RESET << std::endl;	
	*this = x;
}

Brain& Brain::operator=(const Brain& x)
{
	std::cout << MAGENTA << "Brain : Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
	{
		for (unsigned int i = 0; i < 100; ++i)
			_ideas[i] = x._ideas[i];
	}
	return (*this);	
}

Brain::~Brain(void)
{
	std::cout << MAGENTA << "Brain : Destructor called" << RESET << std::endl;	
}

void	Brain::announce(void) const
{
	for (unsigned int idx = 0; idx < 100; idx++)
		std::cout << _ideas[idx] << std::endl;
}
