/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:56:55 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/28 13:48:58 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("default")
{
	std::cout << "[+] AMateria Default constructor called\n";
}

AMateria::AMateria( const std::string &type ) : _type(type)
{
	std::cout << "[+] AMateria [" << this->_type << "] Parameterized constructor called\n";
}

AMateria::AMateria( const AMateria &object ) : _type(object._type)
{
	std::cout << "[+] AMateria [" << this->_type << "] Copy constructor called\n";
}

AMateria::~AMateria( void )
{
	std::cout << "[+] AMateria [" << this->_type << "] destructor called\n";
}

AMateria&	AMateria::operator = ( const AMateria &object )
{
	std::cout << "[+] AMateria Copy assignment operator called\n";
	if (this != &object)
		this->_type = object._type;
	return (*this);
}

const std::string&	AMateria::getType( void ) const
{
	return (this->_type);
}

void				AMateria::use( ICharacter& target )
{
	std::cout << "* AMateria use to " << target.getName() << " *\n";
}
