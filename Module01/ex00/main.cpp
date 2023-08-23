/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:51:14 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/23 14:51:01 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	Since newZombie() returns pointer and annouces itself outside the function, then
	you must allocate the object on the heap so you can use it outside, if you try to
	allocate it on the stack, the object will be destroyed immediately after newZombie()
	scope ends.
	Because you allocate it on the heap using [new], then it will be destroyed only after
	freeing the memory allocated using [delete], otherwise it will still on the memory.
*/
Zombie	*newZombie( std::string name );

/*
	Since randomChump() returns void and annouces itself inside the function, then there
	is no need to allocates the object on the heap because we won't use it outside the
	function scope.
	the object will be destroyed immediately after randomChump() scope end.
*/
void	randomChump( std::string name );

int main( void )
{
	Zombie	*zombie_ptr = newZombie("A");
	zombie_ptr->announce();
	randomChump("B");
	delete zombie_ptr;
	return (0);
}
