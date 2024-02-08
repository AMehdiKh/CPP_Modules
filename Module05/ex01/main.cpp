/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:20:54 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 00:28:44 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main( void )
{
	Bureaucrat	mehdi("MEHDI", 5);
	try
	{
		Form	form("chahada dl7ayat XD", 10, 0);
	}
	catch ( std::exception &e )
	{
		std::cerr << "[+] Exception catched.\n";
		std::cerr << e.what();
	}
	Form	form("chahada dl3ozoba hh", 5, 50);
	std::cout << form;
	mehdi.signForm(form);
	std::cout << form;

	return (0);
}
