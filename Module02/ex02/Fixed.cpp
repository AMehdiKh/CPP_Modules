/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:13:00 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/04 00:49:40 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

std::ostream&	operator << ( std::ostream &outStream, const Fixed& object )
{
	outStream << object.toFloat();
	return ( outStream );
}

const int Fixed::_fractionalBits = 8;

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
	this->_fixedPoint = object._fixedPoint;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_fixedPoint / (float)(1 << this->_fractionalBits));
}

int		Fixed::toInt( void ) const
{
	return (roundf(toFloat()));
}

Fixed&	Fixed::operator = ( const Fixed &object )
{	
	std::cout << "Copy assignment operator called\n";
	this->_fixedPoint = object._fixedPoint;
	return (*this);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	this->_fixedPoint = raw;
	std::cout << "setRawBits member function called\n";
}

bool	Fixed::operator > ( const Fixed &object )
{
	return (this->_fixedPoint > object._fixedPoint);
}

bool	Fixed::operator < ( const Fixed &object )
{
	return (this->_fixedPoint < object._fixedPoint);
}

bool	Fixed::operator >= ( const Fixed &object )
{
	return (this->_fixedPoint >= object._fixedPoint);
}

bool	Fixed::operator <= ( const Fixed &object )
{
	return (this->_fixedPoint <= object._fixedPoint);
}

bool	Fixed::operator == ( const Fixed &object )
{
	return (this->_fixedPoint == object._fixedPoint);
}

bool	Fixed::operator != ( const Fixed &object )
{
	return (this->_fixedPoint != object._fixedPoint);
}

Fixed	Fixed::operator + ( const Fixed &object )
{
	Fixed	tmpObject(this->toFloat() + object.toFloat());

	return (tmpObject);
}

Fixed	Fixed::operator - ( const Fixed &object )
{
	Fixed	tmpObject(this->toFloat() - object.toFloat());

	return (tmpObject);
}

Fixed	Fixed::operator * ( const Fixed &object )
{
	Fixed	tmpObject(this->toFloat() * object.toFloat());

	return (tmpObject);
}

Fixed	Fixed::operator / ( const Fixed &object )
{
	Fixed	tmpObject(this->toFloat() / object.toFloat());
	return (tmpObject);
}

Fixed&	Fixed::operator ++ ( void )
{
	this->_fixedPoint += 1;
	return (*this);
}

Fixed	Fixed::operator ++ ( int dummy_param )
{
	(void)dummy_param;
	Fixed	tmpObject(*this);

	this->_fixedPoint += 1;
	return (tmpObject);
}

Fixed&	Fixed::operator -- ( void )
{
	this->_fixedPoint -= 1;
	return (*this);
}

Fixed	Fixed::operator -- ( int dummy_param )
{
	(void)dummy_param;
	Fixed	tmpObject(*this);

	this->_fixedPoint -= 1;
	return (tmpObject);
}

Fixed&	Fixed::min(Fixed &objectA, Fixed &objectB)
{
	if (objectA._fixedPoint <= objectB._fixedPoint)
		return (objectA);
	else
		return (objectB);
}
const Fixed&	Fixed::min(const Fixed &objectA, const Fixed &objectB)
{
	if (objectA._fixedPoint <= objectB._fixedPoint)
		return (objectA);
	else
		return (objectB);
}
Fixed&	Fixed::max(Fixed &objectA, Fixed &objectB)
{
	if (objectA._fixedPoint >= objectB._fixedPoint)
		return (objectA);
	else
		return (objectB);
}
const Fixed&	Fixed::max(const Fixed &objectA, const Fixed &objectB)
{
	if (objectA._fixedPoint >= objectB._fixedPoint)
		return (objectA);
	else
		return (objectB);
}
