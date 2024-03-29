/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:40:04 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/16 14:02:08 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define SIZE 10

int main( void )
{
	std::vector<int>	containerInt;

	srand(time(NULL));
	std::cout << "containerInt elements are:\n";
	for (int i = 0; i < SIZE; ++i)
	{
		int	value = rand() % 10;
		containerInt.push_back(value);
		std::cout << value << std::endl;
	}
	easyfind(containerInt, rand() % 10);

	return (0);
}

