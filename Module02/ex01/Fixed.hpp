/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:13:02 by amehdikh          #+#    #+#             */
/*   Updated: 2023/08/28 14:52:58 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {

	private:
		int					fixedPoint;
		static const int	fractionalBits;

	public:
		Fixed( void );
		Fixed( const Fixed & );
		Fixed( const int );
		Fixed( const float );
		~Fixed( void );
		Fixed&	operator = ( const Fixed & );
		Fixed&	operator << ( const Fixed & );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

#endif