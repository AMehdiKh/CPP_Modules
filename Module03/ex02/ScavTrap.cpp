/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:26:44 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/14 17:12:22 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "[+] ScavTrap " << this->_name << ": ScavTrap Default constructor called\n";
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "[+] ScavTrap " << this->_name << ": ScavTrap Parameterized constructor called\n";
}

ScavTrap::ScavTrap( const ScavTrap &object ) : ClapTrap(object)
{
	std::cout << "[+] ScavTrap " << this->_name << ": ScavTrap Copy constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "[x] ScavTrap " << this->_name << ": ScavTrap destructor called\n";
}

ScavTrap&	ScavTrap::operator = ( const ScavTrap &object )
{
	if (this != &object)
	{
		this->_name = object._name;
		this->_hitPoints = object._hitPoints;
		this->_energyPoints = object._energyPoints;
		this->_attackDamage = object._attackDamage;
	}
	std::cout << "[+] ScavTrap " << this->_name << ": ScavTrap Copy assignment operator called\n";
	return (*this);
}

void		ScavTrap::attack( const std::string& target )
{
    if (this->_hitPoints && this->_energyPoints)
	{
		this->_energyPoints -= 1;
		std::cout << "[*] ScavTrap "<< this->_name << " attacks " << target <<
			", causing "<< this->_attackDamage << " points of damage!\n";
	}
	else if (!this->_hitPoints)
		std::cout << "[!] ScavTrap "<< this->_name << " can't attack because it's already dead!\n";
	else if (!this->_energyPoints)
		std::cout << "[!] ScavTrap "<< this->_name << " can't attack because it's out of energy points!\n";
}

void		ScavTrap::guardGate( void )
{
	if (!this->_hitPoints)
		std::cout << "[!] ScavTrap " << this->_name << " can't change to Gate keeper mode because it's already dead!\n";
	else
		std::cout << "[*] ScavTrap " << this->_name << " is now in Gate keeper mode.\n";
}
