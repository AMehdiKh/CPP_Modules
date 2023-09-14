/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 00:52:19 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/14 16:28:59 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ( void )
{
	ClapTrap	jack("Jack");
	ClapTrap	max("Max");

	jack.setAttackDamage(5).attack("Max");
	max.takeDamage(jack.getAttackDamage());
	
	max.setAttackDamage(10).attack("Jack");
	jack.takeDamage(max.getAttackDamage());
	
	max.beRepaired(5);
	jack.beRepaired(10);

	std::cout << std::endl;
	jack.getHitPoints();
	max.getHitPoints();
	
	std::cout << std::endl;
	jack.getEnergyPoints();
	max.getEnergyPoints();
	
	std::cout << std::endl;

	return (0);
}