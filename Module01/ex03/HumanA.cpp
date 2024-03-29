/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 04:14:04 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/24 22:54:44 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon) {}

void	HumanA::attack( void ) const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

void	HumanA::setWeapon( Weapon& weapon )
{
	this->_weapon = weapon;
}

HumanA::~HumanA() {}
