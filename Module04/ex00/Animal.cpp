/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:37:01 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 10:35:44 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type("Animal")
{
	std::cout << "[+] Animal Default constructor called\n";
}

Animal::Animal( const Animal &object ) : _type(object._type)
{
	std::cout << "[+] Animal Copy constructor called\n";
}

Animal::~Animal( void )
{
	std::cout << "[x] Animal destructor called\n";
}

Animal&	Animal::operator = ( const Animal &object )
{
	std::cout << "[+] Animal Copy assignment operator called\n";
	if (this != &object)
		this->_type = object._type;
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
