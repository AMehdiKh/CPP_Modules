/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 02:02:55 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/23 23:53:54 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main( void )
{
	Zombie		*zombieArray;
	std::string	zombieNames;
	int			zombieCounts;

	zombieNames = "7madcha";
	zombieCounts = 13;
	zombieArray = zombieHorde(zombieCounts, zombieNames);
	for (int i = 0; i < zombieCounts; ++i)
		zombieArray[i].announce();
	delete [] zombieArray;
	return (0);
}