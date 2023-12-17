/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/17 12:16:16 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( const std::string& );
		Cat( const Cat& );
		Cat& operator=( const Cat& );
		virtual ~Cat( void );

		virtual void	makeSound( void ) const;
		void			announceBrainIdea( void ) const;
		void			setBrainIdea( const std::string );

	private:
		Brain*	_brain;
};

#endif /* __CAT_HPP__ */
