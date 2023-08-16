/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 02:02:57 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/11 03:49:11 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) : _name("null") {}

Zombie::Zombie( std::string name ) : _name(name) {}

Zombie::~Zombie( void )
{
	std::cout << this->_name << ": has been destroyed.\n";
}

void    Zombie::setName( std::string name )
{
	this->_name = name;
}

void    Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}
