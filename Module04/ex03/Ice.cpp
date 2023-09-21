/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:33:29 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/21 17:04:06 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	std::cout << "[+] Ice Default constructor called\n";
}

Ice::Ice( const Ice &object ) : AMateria("ice")
{
	this->_type = object._type;
	std::cout << "[+] Ice Copy constructor called\n";
}

Ice::~Ice( void )
{
	std::cout << "[x] Ice destructor called\n";
}

Ice&	Ice::operator = ( const Ice &object )
{
	if (this != &object)
		this->_type = object._type;
	std::cout << "[+] Ice Copy assignment operator called\n";
	return (*this);
}

Ice*	Ice::clone( void ) const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
