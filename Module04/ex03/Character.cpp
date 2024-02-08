/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:58 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/29 13:27:49 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : _name("default")
{
	std::cout << "[+] Character Default constructor called\n";
	for (int i = 0; i < 4; ++i)
	{
		this->_inventory[i] = NULL;
		this->_unequiped[i] = false;
	}
}

Character::Character( std::string const &name ) : _name(name)
{
	std::cout << "[+] Character [" << this->_name << "] Parameterized constructor called\n";
	for (int i = 0; i < 4; ++i)
	{
		this->_inventory[i] = NULL;
		this->_unequiped[i] = false;
	}
}

Character::Character( const Character &object ) : _name(object._name)
{
	std::cout << "[+] Character [" << this->_name << "] Copy constructor called\n";
	for (int i = 0; i < 4; ++i)
	{
		if (object._inventory[i] == NULL)
			this->_inventory[i] = NULL;
		else
			this->_inventory[i] = object._inventory[i]->clone();
		this->_unequiped[i] = object._unequiped[i];
	}
}

Character::~Character()
{
	std::cout << "[+] Character [" << this->_name << "] destructor called\n";
}

Character&	Character::operator = ( const Character &object )
{
	std::cout << "[+] Character [" << object._name << "] Copy constructor called\n";
	if (this != &object)
	{
		this->_name = object._name;
		for (int i = 0; i < 4; ++i)
		{
			delete this->_inventory[i];
			if (object._inventory[i] == NULL)
				this->_inventory[i] = NULL;
			else
				this->_inventory[i] = object._inventory[i]->clone();
			this->_unequiped[i] = object._unequiped[i];
		}
	}
	return (*this);
}

const std::string&	Character::getName( void ) const
{
	return (this->_name);
}

void	Character::equip( AMateria* object )
{
	this->_freeUnequiped();
	for (int i = 0; (i < 4 && object != NULL); ++i)
	{
		if (this->_inventory[i] == NULL)
		{
			std::cout << "[*] The Materia [" << object->getType() << "] is equiped in The inventory.\n";
			this->_inventory[i] = object;
			return;
		}
	}
	std::cout << "[!] The inventory is full, The Materia [" << object->getType() << "] is destroyed.\n";
	delete object;
}

void	Character::unequip( int idx )
{
	if ((idx >= 0 && idx <= 3) && this->_inventory[idx] != NULL)
	{
		std::cout << "[*] The Materia [" << this->_inventory[idx]->getType() << "] is unequiped from The inventory.\n";
		this->_unequiped[idx] = true;
		return;
	}
	std::cout << "[!] unequiping The Materia is failed.\n";
}

void	Character::use( int idx, ICharacter& target )
{
	this->_freeUnequiped();
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}

void	Character::_freeUnequiped( void )
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_unequiped[i] == true)
		{
			delete	this->_inventory[i];
			this->_inventory[i] = NULL;
			this->_unequiped[i] = false;
		}
	}
}
