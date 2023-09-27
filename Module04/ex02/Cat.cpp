/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:35:42 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 11:59:17 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "[+] Cat Default constructor called, Brain memory allocated\n";
	this->_type = "Cat";
	this->catBrain = new Brain();
}

Cat::Cat( const Cat &object ) : AAnimal(object)
{
	std::cout << "[+] Cat Copy constructor called\n";
	this->catBrain = new Brain(*object.catBrain);
}

Cat::~Cat( void )
{
	std::cout << "[x] Cat destructor called, Brain memory freed\n";
	delete this->catBrain;
}

Cat&	Cat::operator = ( const Cat &object )
{
	std::cout << "[+] Cat Copy assignment operator called\n";
	if (this != &object)
	{
		this->_type = object._type;
		*this->catBrain = *object.catBrain;
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "* Cat Sound *" << std::endl;
}
