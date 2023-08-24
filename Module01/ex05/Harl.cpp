/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 05:11:15 by amehdikh          #+#    #+#             */
/*   Updated: 2023/08/24 22:27:35 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my "
	"7XL-double-cheese-triple-pickle-special-ketchup "
	"burger.\nI really do!\n\n";
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon "
	"costs more money.\nYou didn't put enough bacon in my "
	"burger! If you did, I wouldn't be asking for more!\n\n";
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon "
	"for free.\nI've been coming for years whereas you started "
	"working here since last month.\n\n";
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void	Harl::complain( std::string level )
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*ptrArrayFunc[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; ++i)
	{
		if (level == levels[i])
		{
			std::cout << "[ " << level << " ]\n";
			(this->*ptrArrayFunc[i])();
			break ;
		}
	}
}

Harl::~Harl( void ) {}
