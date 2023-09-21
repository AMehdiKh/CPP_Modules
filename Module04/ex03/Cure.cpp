/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:22:36 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/21 17:03:50 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "[+] Cure Default constructor called\n";
}

Cure::Cure( const Cure &object ) : AMateria("cure")
{
	this->_type = object._type;
	std::cout << "[+] Cure Copy constructor called\n";
}

Cure::~Cure( void )
{
	std::cout << "[x] Cure destructor called\n";
}

Cure&	Cure::operator = ( const Cure &object )
{
	if (this != &object)
		this->_type = object._type;
	std::cout << "[+] Cure Copy assignment operator called\n";
	return (*this);
}

Cure*	Cure::clone( void ) const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
