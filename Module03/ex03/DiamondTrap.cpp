/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:56:44 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/14 19:37:09 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("default_clap_name")
{
	this->_name = "default";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "[+] DiamondTrap " << this->_name << ": DiamondTrap Default constructor called\n";
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "[+] DiamondTrap " << this->_name << ": DiamondTrap Parameterized constructor called\n";
}

DiamondTrap::DiamondTrap( const DiamondTrap &object ) :
	ClapTrap(object),
	FragTrap(object),
	ScavTrap(object)
{
	std::cout << "[+] DiamondTrap " << this->_name << ": DiamondTrap Copy constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[x] DiamondTrap " << this->_name << ": DiamondTrap destructor called\n";
}

DiamondTrap&	DiamondTrap::operator = ( const DiamondTrap &object )
{
	if (this != &object)
	{
		this->_name = object._name;
		this->_hitPoints = object._hitPoints;
		this->_energyPoints = object._energyPoints;
		this->_attackDamage = object._attackDamage;
	}
	std::cout << "[+] DiamondTrap " << this->_name << ": DiamondTrap Copy assignment operator called\n";
	return (*this);
}

void		DiamondTrap::attack( const std::string& target )
{
	FragTrap::attack(target);
}

void		DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name is: " << this->_name << ", and The ClapTrap name is : " << ClapTrap::_name << ".\n";
}
