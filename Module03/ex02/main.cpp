/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 00:52:19 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/15 18:02:01 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main ( void )
{
	FragTrap	jack("Jack");
	std::cout << std::endl;

	std::cout << "[#] Hit Points: " << jack.getHitPoints() << std::endl;
	std::cout << "[#] Energy Points: " << jack.getEnergyPoints() << std::endl;
	std::cout << "[#] Attack Damage: " << jack.getAttackDamage() << std::endl;
	std::cout << std::endl;

	jack.highFivesGuy();
	std::cout << std::endl;

	jack.attack("Max");
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