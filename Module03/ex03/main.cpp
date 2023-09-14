/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 00:52:19 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/14 19:34:01 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main ( void )
{
	// DiamondTrap	max("Max");
	
	// std::cout << std::endl;
	// max.getHitPoints();
	// max.getEnergyPoints();
	
	// std::cout << std::endl;
	// max.attack("Jack");
	
	// std::cout << std::endl;
	// max.whoAmI();

	DiamondTrap ptr("a");
	ptr.getEnergyPoints();

	std::cout << std::endl;

	return (0);
}