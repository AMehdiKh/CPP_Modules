/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:13:02 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/04 15:12:46 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {

	private:

		int					_fixedPoint;
		static const int	_fractionalBits;

	public:

		Fixed( void );
		Fixed( const int );
		Fixed( const float );
		Fixed( const Fixed & );
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const );

		float	toFloat( void ) const;
		int		toInt( void ) const;

		Fixed&	operator = ( const Fixed & );
};

std::ostream&	operator << ( std::ostream &outStream, const Fixed& object );

#endif