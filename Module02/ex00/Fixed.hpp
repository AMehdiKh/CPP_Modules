/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:13:02 by amehdikh          #+#    #+#             */
/*   Updated: 2023/08/27 11:31:40 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {

	private:
		int					fixedPoint;
		static const int	fractionalBits;

	public:
		Fixed( void );
		Fixed( const Fixed & );
		Fixed&	operator= ( const Fixed & );
		~Fixed( void );
		int getRawBits( void ) const;
		void setRawBits( int const raw );

};

#endif