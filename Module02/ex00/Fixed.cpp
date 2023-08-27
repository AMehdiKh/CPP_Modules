/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:13:00 by amehdikh          #+#    #+#             */
/*   Updated: 2023/08/27 22:11:50 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed( void ) : fixedPoint(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const Fixed &object)
{
	std::cout << "Copy constructor called\n";
	this->fixedPoint = object.getRawBits();
}

Fixed&	Fixed::operator= ( const Fixed &object )
{	
	std::cout << "Copy assignment operator called\n";
	this->fixedPoint = object.getRawBits();
	return (*this);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	this->fixedPoint = raw;
}
