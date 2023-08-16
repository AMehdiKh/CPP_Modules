/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 02:02:55 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/11 03:54:12 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	Zombie		*zombie_array;
	std::string name;
	int			size;

	name = "lm3ti";
	size = 10;
	zombie_array = zombieHorde(size, name);
	for (int i = 0; i < size; ++i)
		zombie_array[i].announce();
	delete [] zombie_array;
	return (0);
}