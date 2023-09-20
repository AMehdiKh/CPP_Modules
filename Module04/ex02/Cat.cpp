/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:35:42 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/17 20:48:32 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	this->catBrain = new Brain();
	this->_type = "Cat";
	std::cout << "[+] Cat Default constructor called, Brain memory allocated\n";
}

Cat::Cat( const Cat &object ) : AAnimal()
{
	this->catBrain = new Brain(*object.catBrain);
	// for (int i = 0; i < 100; ++i)
	// 	this->catBrain->_ideas[i] = object.catBrain->_ideas[i];
	this->_type = object._type;
	std::cout << "[+] Cat Copy constructor called\n";
}

Cat::~Cat( void )
{
	delete this->catBrain;
	std::cout << "[x] Cat destructor called, Brain memory freed\n";
}

Cat&	Cat::operator = ( const Cat &object )
{
	if (this != &object)
	{
		this->catBrain = new Brain(*object.catBrain);
		// for (int i = 0; i < 100; ++i)
		// 	this->catBrain->_ideas[i] = object.catBrain->_ideas[i];
		this->_type = object._type;
	}
	std::cout << "[+] Cat Copy assignment operator called\n";
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "* Cat Sound *" << std::endl;
}
