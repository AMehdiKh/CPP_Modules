/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:58 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/20 11:20:18 by ael-khel         ###   ########.fr       */
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
	this->_name = object.name;
	std::cout << "[+] Character " << this->_name << "Copy constructor called\n";
}
Character::~Character()
{
	std::cout << "[+] Character " << this->_name << " destructor called\n";
}

Character&			Character::operator = ( const Character &object )
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
	this->_name = object.name;
	std::cout << "[+] Character " << this->_name << "Copy constructor called\n";
}

const std::string&	Character::getName( void ) const
{
	return (this->_name);
}

void				Character::equip( AMateria* m )
{
	for (int i = 0; i < 4; ++i)
	{
		if (object._inventory[i] == NULL)
			this->_inventory[i] = ;
	}
}

void				Character::unequip( int idx )
{
	
}

void				Character::use( int idx, ICharacter& target )
{
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
