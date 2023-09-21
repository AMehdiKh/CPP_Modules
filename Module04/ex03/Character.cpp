/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:58 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/21 17:08:29 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : _name("default")
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
	std::cout << "[+] Character Default constructor called\n";

}
Character::Character( std::string const &name ) : _name(name)
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
	std::cout << "[+] Character " << this->_name << " Parameterized constructor called\n";
}
Character::Character( const Character &object )
{
	for (int i = 0; i < 4; ++i)
	{
		if (object._inventory[i] == NULL)
			this->_inventory[i] = NULL;
		else
			this->_inventory[i] = object._inventory[i]->clone();
	}
	this->_name = object._name;
	std::cout << "[+] Character " << this->_name << "Copy constructor called\n";
}

Character::~Character()
{
	std::cout << "[+] Character " << this->_name << " destructor called\n";
}

Character&	Character::operator = ( const Character &object )
{
	for (int i = 0; i < 4; ++i)
	{
		if (object._inventory[i] == NULL)
			this->_inventory[i] = NULL;
		else
		{
			delete this->_inventory[i];
			this->_inventory[i] = object._inventory[i]->clone();
		}
	}
	this->_name = object._name;
	std::cout << "[+] Character " << this->_name << "Copy constructor called\n";
	return (*this);
}

const std::string&	Character::getName( void ) const
{
	return (this->_name);
}

void	Character::equip( AMateria* object )
{
	bool	fullInventory;

	fullInventory = true;
	this->_freeUnequiped();
	for (int i = 0; (i < 4 && object != NULL); ++i)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = object;
			fullInventory = false;
			break ;
		}
	}
	if (fullInventory == true)
		delete object;
}

void	Character::unequip( int idx )
{
	if ((idx >= 0 && idx <= 3) && this->_inventory[idx] != NULL)
		this->_unequiped[idx] = true;
}

void	Character::use( int idx, ICharacter& target )
{
	this->_freeUnequiped();
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

void	Character::_freeUnequiped( void )
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_unequiped[i] == true)
		{
			this->_unequiped[i] = false;
			delete	this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}
