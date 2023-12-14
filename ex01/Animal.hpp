/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/14 20:22:44 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define CYAN    "\033[36m"      /* Cyan */

#include <iostream>

class Animal
{
	public:
		Animal( void );
		Animal( const Animal& );
		Animal& operator=( const Animal& );
		virtual ~Animal( void );

		const std::string&	getType( void ) const;
		virtual void		makeSound( void ) const;

	protected:
		std::string	_type;

};

#endif /* __ANIMAL_HPP__ */
