/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:13:02 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/06 03:08:40 by ael-khel         ###   ########.fr       */
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
		~Fixed();

		int					getRawBits( void ) const;
		void				setRawBits( const int );
		float				toFloat( void ) const;
		int					toInt( void ) const;

		Fixed&				operator = ( const Fixed & );

		bool				operator > ( const Fixed & ) const;
		bool				operator < ( const Fixed & ) const;
		bool				operator >= ( const Fixed & ) const;
		bool				operator <= ( const Fixed & ) const;
		bool				operator == ( const Fixed & ) const;
		bool				operator != ( const Fixed & ) const;

		Fixed				operator + ( const Fixed & ) const;
		Fixed				operator - ( const Fixed & ) const;
		Fixed				operator * ( const Fixed & ) const;
		Fixed				operator / ( const Fixed & ) const;

		Fixed&				operator ++ ( void );
		Fixed&				operator -- ( void );

		Fixed				operator ++ ( int );
		Fixed				operator -- ( int );

		static Fixed&		min(Fixed &, Fixed &);
		static Fixed&		max(Fixed &, Fixed &);

		static const Fixed&	min(const Fixed &, const Fixed &);
		static const Fixed&	max(const Fixed &, const Fixed &);

};

std::ostream&	operator << ( std::ostream &outStream, const Fixed& object );

#endif