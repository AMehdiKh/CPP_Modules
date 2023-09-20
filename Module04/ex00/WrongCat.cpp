/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:01:32 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/17 11:21:02 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	this->_type = "WrongCat";
	std::cout << "[+] WrongCat Default constructor called\n";
}

WrongCat::WrongCat( const WrongCat &object ) : WrongAnimal()
{
	this->_type = object._type;
	std::cout << "[+] WrongCat Copy constructor called\n";
}

WrongCat::~WrongCat( void )
{
	std::cout << "[x] WrongCat destructor called\n";
}

WrongCat&	WrongCat::operator = ( const WrongCat &object )
{
	if (this != &object)
		this->_type = object._type;
	std::cout << "[+] WrongCat Copy assignment operator called\n";
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "* WrongCat Sound *" << std::endl;
}