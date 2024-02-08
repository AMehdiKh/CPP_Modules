/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 02:51:34 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/01 00:18:05 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <cstring>
# include <limits>
# include <cmath>

class	ScalarConverter {

	private	:

		ScalarConverter( void );		

	public	:

		static void	convert( const std::string &value );

		class	UnknownType : public	std::exception
		{
			virtual const char*	what( void ) const throw()
			{
				return ("Unknown type");
			}
		};

};

void	convertChar(const double &result);
void	convertInt(const double &result);
void	convertFloat(const double &result);

#endif