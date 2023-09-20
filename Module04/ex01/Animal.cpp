/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:37:01 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/17 11:18:43 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type("Animal")
{
	std::cout << "[+] Animal Default constructor called\n";
}

Animal::Animal( const Animal &object )
{
	this->_type = object._type;
	std::cout << "[+] Animal Copy constructor called\n";
}

Animal::~Animal( void )
{
	std::cout << "[x] Animal destructor called\n";
}

Animal&	Animal::operator = ( const Animal &object )
{
	if (this != &object)
		this->_type = object._type;
	std::cout << "[+] Animal Copy assignment operator called\n";
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "* Animal Sound *" << std::endl;
}

const std::string&	Animal::getType( void ) const
{
	return (this->_type);
}
