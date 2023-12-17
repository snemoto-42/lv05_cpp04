/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/17 12:12:25 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#define RESET   "\033[0m"
#define MAGENTA "\033[35m"      /* Magenta */

#include <iostream>

class Brain
{
	public:
		Brain( void );
		Brain( const std::string& );
		Brain( const Brain& );
		Brain& operator=( const Brain& );
		virtual ~Brain( void );

		void	announce( void ) const;
		void	setIdeas( const std::string );

	private:
		std::string	_ideas[100];
};

#endif /* __BRAIN_HPP__ */
