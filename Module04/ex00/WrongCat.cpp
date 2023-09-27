/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:01:32 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 11:33:30 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "[+] WrongCat Default constructor called\n";
	this->_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &object ) : WrongAnimal(object)
{
	std::cout << "[+] WrongCat Copy constructor called\n";
}

WrongCat::~WrongCat( void )
{
	std::cout << "[x] WrongCat destructor called\n";
}

WrongCat&	WrongCat::operator = ( const WrongCat &object )
{
	std::cout << "[+] WrongCat Copy assignment operator called\n";
	if (this != &object)
		this->_type = object._type;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "* WrongCat Sound *" << std::endl;
}
