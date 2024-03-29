/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:13:05 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/06 15:18:03 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main ( void )
{

	if ( bsp(Point(), Point(2, 3), Point(3, -1), Point()) )
		std::cout << "The point is inside the triangle.\n";
	else
		std::cout << "The point is not inside the triangle.\n";

    return (0);
}