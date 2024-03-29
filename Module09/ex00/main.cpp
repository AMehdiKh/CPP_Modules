/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:40:04 by ael-khel          #+#    #+#             */
/*   Updated: 2024/03/06 19:42:38 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main( int ac, char **av )
{
	if (ac != 2)
	{
		std::cerr << "Error: The program must take a file as argument." << std::endl;
		return ( 1 );	
	}

	try
	{
		BitcoinExchange	bitcoin;

		bitcoin.run( av[1] );
	}
	catch ( const std::exception &e )
	{
		std::cerr << e.what() << std::endl;
	}

	return ( 0 );
}
