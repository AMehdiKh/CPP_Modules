/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:25:23 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/06 03:29:08 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class	Point {

	private:

		const Fixed	_x;
		const Fixed	_y;
	
	public:

		Point( void );
		Point( const float, const float );
		Point( const Point & );
		~Point();

		Point&	operator = ( const Point & );

		const Fixed&	getX( void ) const;
		const Fixed&	getY( void ) const;

};

#endif