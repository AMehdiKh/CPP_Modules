/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:20:54 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 00:25:26 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	try
	{
		Bureaucrat mehdi("MEHDI", 1);
		std::cout << mehdi;
		mehdi.downGrade();
		std::cout << mehdi;
		mehdi.upGrade();
		std::cout << mehdi;
		mehdi.upGrade();
		std::cout << mehdi;
	}
	catch ( std::exception &e )
	{
		std::cerr << "[+] Exception catched.\n";
		std::cerr << e.what();
	}
	return (0);
}
