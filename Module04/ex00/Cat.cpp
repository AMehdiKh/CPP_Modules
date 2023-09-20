/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:35:42 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/17 11:19:55 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	this->_type = "Cat";
	std::cout << "[+] Cat Default constructor called\n";
}

Cat::Cat( const Cat &object ) : Animal()
{
	this->_type = object._type;
	std::cout << "[+] Cat Copy constructor called\n";
}

Cat::~Cat( void )
{
	std::cout << "[x] Cat destructor called\n";
}

Cat&	Cat::operator = ( const Cat &object )
{
	if (this != &object)
		this->_type = object._type;
	std::cout << "[+] Cat Copy assignment operator called\n";
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "* Cat Sound *" << std::endl;
}
