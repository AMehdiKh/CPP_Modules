/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:27:43 by ael-khel          #+#    #+#             */
/*   Updated: 2023/07/23 23:57:45 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string				argument;
	std::string::iterator	it;
	int						index;

	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (index = 1; index < argc; ++index)
	{
		argument = argv[index];
		for (it = argument.begin(); it != argument.end(); ++it)
			*it = std::toupper(*it);
		std::cout << argument;
	}
	std::cout << std::endl;
	return (0);
}
