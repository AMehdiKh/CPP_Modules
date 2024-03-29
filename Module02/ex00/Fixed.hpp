/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:13:02 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/04 15:36:40 by ael-khel         ###   ########.fr       */
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
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const );

		Fixed&	operator= ( const Fixed & );

};

#endif