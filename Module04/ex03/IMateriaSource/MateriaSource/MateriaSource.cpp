/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:49:27 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/20 12:48:36 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : _name("default")
{
	for (int i = 0; i < 4; ++i)
		this->_memory[i] = NULL;
	std::cout << "[+] MateriaSource Default constructor called\n";

}
MateriaSource::MateriaSource( std::string const &name ) : _name(name)
{
	for (int i = 0; i < 4; ++i)
		this->_memory[i] = NULL;
	std::cout << "[+] MateriaSource " << this->_name << " Parameterized constructor called\n";

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
	this->_name = object.name;
	std::cout << "[+] MateriaSource " << this->_name << "Copy constructor called\n";
}

MateriaSource::~MateriaSource()
{
	std::cout << "[+] MateriaSource " << this->_name << " destructor called\n";
}

MateriaSource&			MateriaSource::operator = ( const MateriaSource &object )
{
	for (int i = 0; i < 4; ++i)
	{
		if (object._memory[i] == NULL)
			this->_memory[i] = NULL;
		else
		{
			delete this->_memory[i];
			this->_memory[i] = object._memory[i]->clone();
		}
	}
	this->_name = object.name;
	std::cout << "[+] MateriaSource " << this->_name << "Copy constructor called\n";
}

// learnMateria(AMateria*)

// Copies the Materia passed as a parameter and store it in memory so it can be cloned
// later. Like the Character, the MateriaSource can know at most 4 Materias. They
// are not necessarily unique.

void		MateriaSource::learnMateria( AMateria* object)
{
	bool	full = true;

	for (int i = 0; i < 4; ++i)
	{
		if (object._memory[i] == NULL)
		{
			this->_memory[i] = object;
			full = false;
			break ;
		}
	}
	if (full)
		delete object;
}

// createMateria(std::string const &)

// Returns a new Materia. The latter is a copy of the Materia previously learned by
// the MateriaSource whose type equals the one passed as parameter. Returns 0 if
// the type is unknown.

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
