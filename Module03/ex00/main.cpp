/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 00:52:19 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/15 17:40:08 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ( void )
{
	ClapTrap	jack("Jack");
	std::cout << std::endl;

	std::cout << "[#] Hit Points: " << jack.getHitPoints() << std::endl;
	std::cout << "[#] Energy Points: " << jack.getEnergyPoints() << std::endl;
	std::cout << "[#] Attack Damage: " << jack.getAttackDamage() << std::endl;
	std::cout << std::endl;

	jack.setAttackDamage(5).attack("Max");
	std::cout << std::endl;

	jack.takeDamage(10);
	std::cout << std::endl;

	jack.beRepaired(5);
	std::cout << std::endl;

	std::cout << "[#] Hit Points: " << jack.getHitPoints() << std::endl;
	std::cout << "[#] Energy Points: " << jack.getEnergyPoints() << std::endl;
	std::cout << "[#] Attack Damage: " << jack.getAttackDamage() << std::endl;
	
	std::cout << std::endl;

	return (0);
}