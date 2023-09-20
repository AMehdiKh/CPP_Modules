/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:32:29 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/17 11:20:42 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->_type = "Dog";
	std::cout << "[+] Dog Default constructor called\n";
}

Dog::Dog( const Dog &object ) : Animal()
{
	this->_type = object._type;
	std::cout << "[+] Dog Copy constructor called\n";
}

Dog::~Dog( void )
{
	std::cout << "[x] Dog destructor called\n";
}

Dog&	Dog::operator = ( const Dog &object )
{
	if (this != &object)
		this->_type = object._type;
	std::cout << "[+] Dog Copy assignment operator called\n";
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "* Dog Sound *" << std::endl;
}