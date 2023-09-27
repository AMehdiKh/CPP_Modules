/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:49:27 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 18:24:43 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	std::cout << "[+] MateriaSource Default constructor called\n";
	for (int i = 0; i < 4; ++i)
		this->_memory[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &object )
{
	for (int i = 0; i < 4; ++i)
	{
		if (object._memory[i] == NULL)
			this->_memory[i] = NULL;
		else
			this->_memory[i] = object._memory[i]->clone();
	}
	std::cout << "[+] MateriaSource Copy constructor called\n";
}

MateriaSource::~MateriaSource()
{
	std::cout << "[+] MateriaSource destructor called\n";
}

MateriaSource&			MateriaSource::operator = ( const MateriaSource &object )
{
	std::cout << "[+] MateriaSource Copy constructor called\n";
	if (this != &object)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete this->_memory[i];
			if (object._memory[i] == NULL)
				this->_memory[i] = NULL;
			else
				this->_memory[i] = object._memory[i]->clone();
		}
	}
	return (*this);
}

void		MateriaSource::learnMateria( AMateria* object)
{
	bool	fullInventory;

	fullInventory = true;
	for (int i = 0; (i < 4 && object != NULL); ++i)
	{
		if (this->_memory[i] == NULL)
		{
			this->_memory[i] = object;
			fullInventory = false;
			break ;
		}
	}
	if (fullInventory == true)
		delete object;
}

AMateria*	MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_memory[i] != NULL)
		{
			if (this->_memory[i]->getType() == type)
				return (this->_memory[i]->clone());
		}
	}
	return (NULL);
}
