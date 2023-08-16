/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:51:14 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/11 02:16:48 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	newZombie() Creates Zombie object allocated with new in the heap and Returns
	pointer to the object which means we can use it and announce it outside
	the scope of the newZombie() unlike if it was allocated in the stack,
	which also means it will be destroyed after freeing the memory allocated with
	delete.
*/
Zombie*	newZombie( std::string name );

/*
	randomChump() Creates Zombie object allocated in the stack and announces itself,
	unlike newZombie() we can't return the object so we can use it and announce it outside 
	randomChump() scope and this because the object is allocated in the function stack
	which means it will be destroyed immediately after randomChump() lifetime end.
*/
void	randomChump( std::string name );

int main( void )
{
	Zombie	*zombie_ptr = newZombie("l3rbi");
	zombie_ptr->announce();
	randomChump("montasir");
	delete zombie_ptr;
	return (0);
}