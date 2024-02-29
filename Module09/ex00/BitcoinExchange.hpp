/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:30:59 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/29 09:04:37 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iterator>
#ifndef	BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <fstream>
# include <string>
# include <map>
# include <iostream>
# include <ctime>


class	BitcoinExchange {

	private	:
	
		std::map < std::string, double>	_dataBase;
	
		void		_openFile( std::ifstream &, const std::string & );
		void		_insertDataBase( std::ifstream & );
		void		_exchange( std::ifstream & );
		std::string	_parseDate( const std::string & );
		void		_checkDate( const std::string &, int, int, int );
		bool		_isLeapYear( int );
		double		_checkAmount( const std::string & );

	public	:

		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange & );
		~BitcoinExchange( );

		void	run( const std::string ); // try ref after use it on av[1] and see if it works

		BitcoinExchange&	operator = ( const BitcoinExchange & );

		class parse_error : public	std::runtime_error {
			
			public	:

				parse_error( const std::string e ) : std::runtime_error(e) { }

		};

};

#endif