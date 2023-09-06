/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:25:18 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/06 03:28:53 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {}

Point::Point( const float x, const float y) : _x(x), _y(y) {}

Point::Point( const Point &object ) : _x(object._x), _y(object._y) {}

Point::~Point() {};

Point&	Point::operator = ( const Point &object )
{
	( void ) object;
	return (*this);
}

const Fixed&	Point::getX( void ) const
{
	return (this->_x);
}

const Fixed&	Point::getY( void ) const
{
	return (this->_y);
}
