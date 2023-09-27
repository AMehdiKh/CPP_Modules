/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:32:29 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 10:43:50 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "[+] Dog Default constructor called\n";
	this->_type = "Dog";
}

Dog::Dog( const Dog &object ) : Animal(object)
{
	std::cout << "[+] Dog Copy constructor called\n";
}

Dog::~Dog( void )
{
	std::cout << "[x] Dog destructor called\n";
}

Dog&	Dog::operator = ( const Dog &object )
{
	std::cout << "[+] Dog Copy assignment operator called\n";
	if (this != &object)
		this->_type = object._type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "* Dog Sound *" << std::endl;
}
