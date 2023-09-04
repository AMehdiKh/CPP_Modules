/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:13:02 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/04 00:49:51 by ael-khel         ###   ########.fr       */
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
		Fixed( const Fixed & );
		Fixed( const int );
		Fixed( const float );
		~Fixed( void );
		Fixed&	operator = ( const Fixed & );

		bool			operator > ( const Fixed & );
		bool			operator < ( const Fixed & );
		bool			operator >= ( const Fixed & );
		bool			operator <= ( const Fixed & );
		bool			operator == ( const Fixed & );
		bool			operator != ( const Fixed & );

		Fixed			operator + ( const Fixed & );
		Fixed			operator - ( const Fixed & );
		Fixed			operator * ( const Fixed & );
		Fixed			operator / ( const Fixed & );

		Fixed&			operator ++ ( void );
		Fixed			operator ++ ( int dummy_param );
		Fixed&			operator -- ( void );
		Fixed			operator -- ( int dummy_param );

		static Fixed&	min(Fixed &, Fixed &);
		static const Fixed&	min(const Fixed &, const Fixed &);
		static Fixed&	max(Fixed &, Fixed &);
		static const Fixed&	max(const Fixed &, const Fixed &);

		int				getRawBits( void ) const;
		void			setRawBits( const int );
		float			toFloat( void ) const;
		int				toInt( void ) const;
};

std::ostream&	operator << ( std::ostream &outStream, const Fixed& object );

#endif