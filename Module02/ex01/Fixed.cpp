/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:13:00 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/06 15:26:48 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed( void ) : _fixedPoint(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int intNum)
{
	this->_fixedPoint = intNum << this->_fractionalBits;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed( const float floatNum)
{
	this->_fixedPoint = roundf(floatNum * (1 << this->_fractionalBits));
	std::cout << "Float constructor called\n";
}

Fixed::Fixed( const Fixed &object)
{
	std::cout << "Copy constructor called\n";
	*this = object;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called\n";
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_fixedPoint / (float)(1 << this->_fractionalBits));
}

int	Fixed::toInt( void ) const
{
	return (roundf(toFloat()));
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_fixedPoint);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPoint = raw;
	std::cout << "setRawBits member function called\n";
}

Fixed&	Fixed::operator = ( const Fixed &object )
{	
	std::cout << "Copy assignment operator called\n";
	if ( this != &object )
		this->_fixedPoint = object._fixedPoint;
	return (*this);
}

std::ostream&	operator << ( std::ostream &outStream, const Fixed& object )
{
	outStream << object.toFloat();
	return ( outStream );
}
