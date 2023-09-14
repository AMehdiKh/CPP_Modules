/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:41:38 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/14 19:35:17 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "[+] FragTrap " << this->_name << ": FragTrap Default constructor called\n";
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "[+] FragTrap " << this->_name << ": FragTrap Parameterized constructor called\n";
}

FragTrap::FragTrap( const FragTrap &object ) : ClapTrap(object)
{
	std::cout << "[+] FragTrap " << this->_name << ": FragTrap Copy constructor called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "[x] FragTrap " << this->_name << ": FragTrap destructor called\n";
}

FragTrap&	FragTrap::operator = ( const FragTrap &object )
{
	if (this != &object)
	{
		this->_name = object._name;
		this->_hitPoints = object._hitPoints;
		this->_energyPoints = object._energyPoints;
		this->_attackDamage = object._attackDamage;
	}
	std::cout << "[+] FragTrap " << this->_name << ": FragTrap Copy assignment operator called\n";
	return (*this);
}

void		FragTrap::attack( const std::string& target )
{
    if (this->_hitPoints && this->_energyPoints)
	{
		this->_energyPoints -= 1;
		std::cout << "[*] FragTrap "<< this->_name << " attacks " << target <<
			", causing "<< this->_attackDamage << " points of damage!\n";
	}
	else if (!this->_hitPoints)
		std::cout << "[!] FragTrap "<< this->_name << " can't attack because it's already dead!\n";
	else if (!this->_energyPoints)
		std::cout << "[!] FragTrap "<< this->_name << " can't attack because it's out of energy points!\n";
}

void		FragTrap::highFivesGuy( void )
{
	if (!this->_hitPoints)
		std::cout << "[!] FragTrap " << this->_name << " can't request a high five because it's already dead!\n";
	else
		std::cout << "[*] FragTrap " << this->_name << " is requesting high five.\n";
}

