/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:37:01 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/17 20:46:33 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type("AAnimal")
{
	std::cout << "[+] AAnimal Default constructor called\n";
}

AAnimal::AAnimal( const AAnimal &object )
{
	this->_type = object._type;
	std::cout << "[+] AAnimal Copy constructor called\n";
}

AAnimal::~AAnimal( void )
{
	std::cout << "[x] AAnimal destructor called\n";
}

AAnimal&	AAnimal::operator = ( const AAnimal &object )
{
	if (this != &object)
		this->_type = object._type;
	std::cout << "[+] AAnimal Copy assignment operator called\n";
	return (*this);
}

const std::string&	AAnimal::getType( void ) const
{
	return (this->_type);
}
