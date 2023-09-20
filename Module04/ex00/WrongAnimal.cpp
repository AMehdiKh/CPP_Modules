/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:56:27 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/17 11:20:56 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal")
{
	std::cout << "[+] WrongAnimal Default constructor called\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal &object )
{
	this->_type = object._type;
	std::cout << "[+] WrongAnimal Copy constructor called\n";
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "[x] WrongAnimal destructor called\n";
}

WrongAnimal&	WrongAnimal::operator = ( const WrongAnimal &object )
{
	if (this != &object)
		this->_type = object._type;
	std::cout << "[+] WrongAnimal Copy assignment operator called\n";
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "* WrongAnimal Sound *" << std::endl;
}

const std::string&	WrongAnimal::getType( void ) const
{
	return (this->_type);
}
