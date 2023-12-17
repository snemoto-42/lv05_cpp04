/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/17 12:23:41 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( const std::string& );
		Dog( const Dog& );
		Dog& operator=( const Dog& );
		virtual ~Dog( void );

		virtual void	makeSound( void ) const;
		void			announceBrainIdea( void ) const;
		void			setBrainIdea( const std::string );

	private:
		Brain*	_brain;
};

#endif /* __DOG_HPP__ */
