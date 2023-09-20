/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:32:29 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/17 20:39:44 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->dogBrain = new Brain();
	this->_type = "Dog";
	std::cout << "[+] Dog Default constructor called, Brain memory allocated\n";
}

Dog::Dog( const Dog &object ) : Animal()
{
	this->dogBrain = new Brain(*object.dogBrain);
	this->_type = object._type;
	std::cout << "[+] Dog Copy constructor called\n";
}

Dog::~Dog( void )
{
	delete this->dogBrain;
	std::cout << "[x] Dog destructor called, Brain memory freed\n";
}

Dog&	Dog::operator = ( const Dog &object )
{
	if (this != &object)
	{
		this->dogBrain = new Brain(*object.dogBrain);
		this->_type = object._type;
	}
	std::cout << "[+] Dog Copy assignment operator called\n";
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "* Dog Sound *" << std::endl;
}
