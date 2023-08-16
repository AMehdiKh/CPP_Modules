/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 02:03:00 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/11 03:04:27 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie  *zombie_array = new Zombie[N];
	for (int i = 0; i < N; ++i)
		zombie_array[i].setName(name);
	return (zombie_array);
}
