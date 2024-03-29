/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 00:52:19 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 12:01:59 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main ( void )
{
	AAnimal	*animal[10];

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