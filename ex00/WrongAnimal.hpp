/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 17:05:49 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONG_ANIMAL_HPP__
#define __WRONG_ANIMAL_HPP__

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal& );
		WrongAnimal& operator=( const WrongAnimal& );
		virtual ~WrongAnimal( void );

		const std::string&	getType( void ) const;
		virtual void		makeSound( void ) const;

	protected:
		std::string	_type;

};

#endif /* __WRONG_ANIMAL_HPP__ */
