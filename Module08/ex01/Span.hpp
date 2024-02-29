/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:30:59 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/20 23:56:58 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <vector>

class	Span {

	private	:

		std::vector<int>	_span;
		unsigned			_size;
		Span( void );

	public	:

		Span( unsigned );
		Span( const Span & );
		~Span( );
		
		Span&	operator = ( const Span & );
		
		void		addNumber( int );
		void		addNumber( std::vector<int>::const_iterator, std::vector<int>::const_iterator );
		unsigned	shortestSpan( void );
		unsigned	longestSpan( void );

};

#endif