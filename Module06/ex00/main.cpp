/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 02:51:51 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/28 18:56:13 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert VALUE" << std::endl;
		return (1);
	}
	try
	{
		ScalarConverter::convert(av[1]);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}