/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:13:02 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/04 00:48:36 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {

	private:
		int					_fixedPoint;
		static const int	_fractionalBits;

	public:
		Fixed( void );
		Fixed( const Fixed & );
		Fixed&	operator= ( const Fixed & );
		~Fixed( void );
		int getRawBits( void ) const;
		void setRawBits( int const raw );

};

#endif