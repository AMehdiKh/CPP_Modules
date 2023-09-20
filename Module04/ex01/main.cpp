/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 00:52:19 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/17 19:51:12 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
// #include <iostream>

int	main ( void )
{
	Animal	*animal[10];

	for (int i = 0; i < 10; ++i)
	{
		if (i < 5)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}

	std::cout << "\n###########################################################\n\n";

	for (int i = 0; i < 10; ++i)
	{
		if (i < 5)
			delete animal[i];
		else
			delete animal[i];
	}

	return (0);
}