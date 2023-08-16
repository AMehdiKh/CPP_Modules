/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:01:19 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/11 03:55:19 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {}

Zombie::~Zombie( void )
{
	std::cout << this->_name << ": has been destroyed.\n";
}

void    Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}
