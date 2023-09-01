/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:13:00 by amehdikh          #+#    #+#             */
/*   Updated: 2023/08/28 20:35:09 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

std::ostream&	operator << ( std::ostream &outStream, Fixed& object )
{
	outStream << object.toFloat();
	return ( outStream );
}

const int Fixed::fractionalBits = 8;

Fixed::Fixed( void ) : fixedPoint(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int intNum)
{
	this->fixedPoint = intNum << this->fractionalBits;
	std::cout << "Int constructor called\n";
}
Fixed::Fixed( const float floatNum)
{
	this->fixedPoint = floatNum << this->fractionalBits;
	std::cout << "Float constructor called\n"; 
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
	this->fixedPoint = raw;
	std::cout << "setRawBits member function called\n";
}

float	Fixed::toFloat( void ) const
{
	
}

int		Fixed::toInt( void ) const
{
	int	intNum;

	intNum = roundf(toFloat());
	return (intNum >> this->fractionalBits);
}
