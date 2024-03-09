/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:40:04 by ael-khel          #+#    #+#             */
/*   Updated: 2024/03/06 19:42:06 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main( int ac, char **av )
{
	if (ac != 2)
	{
		std::cerr << "Error: The program must take RPN operation." << std::endl;
		return ( 1 );
	}

	try
	{
		RPN	rpn( av[1] );
	}
	catch ( const std::exception &e )
	{
		std::cerr << e.what() << std::endl;
	}

	return ( 0 );
}
