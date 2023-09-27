/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:35:42 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 10:41:13 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "[+] Cat Default constructor called\n";
	this->_type = "Cat";
}

Cat::Cat( const Cat &object ) : Animal(object)
{
	std::cout << "[+] Cat Copy constructor called\n";
}

Cat::~Cat( void )
{
	std::cout << "[x] Cat destructor called\n";
}

Cat&	Cat::operator = ( const Cat &object )
{
	std::cout << "[+] Cat Copy assignment operator called\n";
	if (this != &object)
		this->_type = object._type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "* Cat Sound *" << std::endl;
}
