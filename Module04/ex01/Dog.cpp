/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:32:29 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 11:51:15 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "[+] Dog Default constructor called, Brain memory allocated\n";
	this->_type = "Dog";
	this->dogBrain = new Brain();
}

Dog::Dog( const Dog &object ) : Animal(object)
{
	std::cout << "[+] Dog Copy constructor called\n";
	this->dogBrain = new Brain(*object.dogBrain);
}

Dog::~Dog( void )
{
	std::cout << "[x] Dog destructor called, Brain memory freed\n";
	delete this->dogBrain;
}

Dog&	Dog::operator = ( const Dog &object )
{
	std::cout << "[+] Dog Copy assignment operator called\n";
	if (this != &object)
	{
		this->_type = object._type;
		*this->dogBrain = *object.dogBrain;
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "* Dog Sound *" << std::endl;
}
