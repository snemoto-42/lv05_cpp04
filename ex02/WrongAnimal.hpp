/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/14 22:57:45 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONG_ANIMAL_HPP__
#define __WRONG_ANIMAL_HPP__

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define CYAN    "\033[36m"      /* Cyan */

#include <iostream>

class WrongAnimal
{
	public:
		// WrongAnimal( void );
		// WrongAnimal( const WrongAnimal& );
		// WrongAnimal& operator=( const WrongAnimal& );
		virtual ~WrongAnimal( void );

		const std::string&	getType( void ) const;
		virtual void		makeSound( void ) const = 0;

	protected:
		std::string	_type;

};

#endif /* __WRONG_ANIMAL_HPP__ */
