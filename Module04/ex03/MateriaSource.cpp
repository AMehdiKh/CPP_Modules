/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:49:27 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/28 13:25:00 by ael-khel         ###   ########.fr       */
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
	std::cout << "[+] MateriaSource Copy constructor called\n";
	for (int i = 0; i < 4; ++i)
	{
		if (object._memory[i] == NULL)
			this->_memory[i] = NULL;
		else
			this->_memory[i] = object._memory[i]->clone();
	}
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
	for (int i = 0; (i < 4 && object != NULL); ++i)
	{
		if (this->_memory[i] == NULL)
		{
			this->_memory[i] = object;
			std::cout << "[*] The Materia [" << object->getType() << "] stored in memory.\n";
			return;
		}
	}
	std::cout << "[!] The Memory is full Materia [" << object->getType() << "] is destroyed.\n";
	delete object;
}

AMateria*	MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_memory[i] != NULL)
		{
			if (this->_memory[i]->getType() == type)
			{
				std::cout << "[*] The Materia [" << type << "] is created.\n";
				return (this->_memory[i]->clone());
			}
		}
	}
	std::cout << "[!] The Materia [" << type << "] type is unknown.\n";
	return (NULL);
}
