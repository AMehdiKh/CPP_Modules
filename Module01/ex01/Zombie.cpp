/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 02:02:57 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/23 23:48:11 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) : _name("null")
{
	std::cout << "Zombie has been created.\n";
}

Zombie::Zombie( std::string name ) : _name(name)
{
	std::cout << this->_name << ": has been created.\n";
}

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
