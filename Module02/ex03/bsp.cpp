/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 01:10:28 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/06 15:21:52 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	abs(Fixed object)
{
	if (object < 0)
		return (object * -1);
	return (object);
}

static Fixed	ft_shoelace_area( Point const a, Point const b, Point const c ) 
{
	return ((
			(a.getX() * (b.getY() - c.getY() )) +
			(b.getX() * (c.getY() - a.getY() )) +
			(c.getX() * (a.getY() - b.getY() )) 
			) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	const Fixed	abcArea(abs(ft_shoelace_area( a, b, c )));
	const Fixed	pabArea(abs(ft_shoelace_area( point, a, b )));
	const Fixed	pacArea(abs(ft_shoelace_area( point, a, c )));
	const Fixed	pbcArea(abs(ft_shoelace_area( point, b, c )));

	if (abcArea == 0 || pabArea == 0 || pacArea == 0 || pbcArea == 0)
		return ( false );
	return ( abcArea == (pabArea + pacArea + pbcArea) );
}
