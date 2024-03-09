/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:30:59 by ael-khel          #+#    #+#             */
/*   Updated: 2024/03/06 20:38:32 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef	RPN_HPP
# define RPN_HPP

# include <vector>
# include <stack>
# include <iostream>
# include <algorithm>

class	RPN {

	private	:

		std::stack< long, std::vector< long > >	_stack;

		void	_signedDigit( std::string &, std::string::iterator & );
		bool	_isOperator( const char );
		void	_ops( std::string::iterator & );
		long	_add( void );
		long	_sub( void );
		long	_mul( void );
		long	_div( void );

	public	:

		RPN( void );
		RPN( std::string );
		RPN( const RPN & );
		~RPN( );

		RPN&	operator = ( const RPN & );

};

#endif