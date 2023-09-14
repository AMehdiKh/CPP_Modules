/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 00:51:25 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/14 17:41:35 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : 
	_name("default"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "[+] ClapTrap " << this->_name << ": ClapTrap Default constructor called\n";
}

ClapTrap::ClapTrap( std::string name ) : 
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "[+] ClapTrap " << this->_name << ": ClapTrap Parameterized constructor called\n";
}

ClapTrap::ClapTrap( const ClapTrap &object )
{
	this->_name = object._name;
	this->_hitPoints = object._hitPoints;
	this->_energyPoints = object._energyPoints;
	this->_attackDamage = object._attackDamage;
	std::cout << "[+] ClapTrap " << this->_name << ": ClapTrap Copy constructor called\n";
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "[x] ClapTrap " << this->_name << ": ClapTrap destructor called\n";
}

ClapTrap&	ClapTrap::operator = ( const ClapTrap &object )
{
	if (this != &object)
	{
		this->_name = object._name;
		this->_hitPoints = object._hitPoints;
		this->_energyPoints = object._energyPoints;
		this->_attackDamage = object._attackDamage;
	}
	std::cout << "[+] ClapTrap " << this->_name << ": ClapTrap Copy assignment operator called\n";
	return (*this);
}

void		ClapTrap::attack( const std::string& target )
{
	if (this->_hitPoints && this->_energyPoints)
	{
		this->_energyPoints -= 1;
		std::cout << "[*] ClapTrap "<< this->_name << " attacks " << target <<
			", causing "<< this->_attackDamage << " points of damage!\n";
	}
	else if (!this->_hitPoints)
		std::cout << "[!] ClapTrap "<< this->_name << " can't attack because it's dead!\n";
	else if (!this->_energyPoints)
		std::cout << "[!] ClapTrap "<< this->_name << " can't attack because it's out of energy points!\n";
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints && this->_energyPoints)
	{
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << "[*] ClapTrap "<< this->_name << " repairs itself with " << amount << " points of hit!\n";
	}
	else if (!this->_hitPoints)
		std::cout << "[!] ClapTrap "<< this->_name << " can't repair because it's dead!\n";
	else if (!this->_energyPoints)
		std::cout << "[!] ClapTrap "<< this->_name << " can't repair because it's out of energy points!\n";
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints)
	{
		if (amount >= this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
		std::cout << "[*] ClapTrap "<< this->_name << " got damaged with " << amount << " points of damage!\n";
	}
	else
		std::cout << "[*] ClapTrap "<< this->_name << " can't get damaged because it's already dead!\n";
}

void		ClapTrap::getHitPoints( void ) const
{
	std::cout << this->_name << ": Hit points are: " << this->_hitPoints << std::endl;
}

void		ClapTrap::getEnergyPoints( void ) const
{
	std::cout << this->_name << ": Energy points are: " << this->_energyPoints << std::endl;
}

unsigned int	ClapTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}

ClapTrap&	ClapTrap::setAttackDamage( unsigned int amount )
{
	this->_attackDamage = amount;
	return (*this);
}

ClapTrap&	ClapTrap::setEnergyPoints( unsigned int amount )
{
	this->_energyPoints = amount;
	return (*this);
}
