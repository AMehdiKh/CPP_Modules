/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:09:57 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 11:56:10 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "[+] Brain Default constructor called\n";
}

Brain::Brain( const Brain &object )
{
	std::cout << "[+] Brain Copy constructor called\n";
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = object._ideas[i];
}

Brain::~Brain( void )
{
	std::cout << "[x] Brain destructor called\n";
}

Brain&	Brain::operator = ( const Brain &object )
{
	std::cout << "[+] Brain Copy assignment operator called\n";
	if (this != &object)
		for (int i = 0; i < 100; ++i)
			this->_ideas[i] = object._ideas[i];
	return (*this);
}
