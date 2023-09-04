/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:13:00 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/04 00:48:26 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed( void ) : _fixedPoint(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const Fixed &object)
{
	std::cout << "Copy constructor called\n";
	this->_fixedPoint = object.getRawBits();
}

Fixed&	Fixed::operator= ( const Fixed &object )
{	
	std::cout << "Copy assignment operator called\n";
	this->_fixedPoint = object.getRawBits();
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
	std::cout << "setRawBits member function called\n";
	this->_fixedPoint = raw;
}
