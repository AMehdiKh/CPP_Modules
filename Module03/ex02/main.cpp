/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 00:52:19 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/14 17:04:16 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main ( void )
{
	FragTrap	jack("Jack");

	std::cout << std::endl;

	FragTrap	max("Max");

	std::cout << std::endl;

	jack.attack("Max");
	max.takeDamage(jack.getAttackDamage());

	std::cout << std::endl;
	
	max.setAttackDamage(10).attack("Jack");
	jack.takeDamage(max.getAttackDamage());
	
	std::cout << std::endl;

	max.beRepaired(5);
	jack.beRepaired(10);

	std::cout << std::endl;

	jack.highFivesGuy();
	max.highFivesGuy();

	std::cout << std::endl;

	jack.getHitPoints();
	jack.getEnergyPoints();

	std::cout << std::endl;

	max.getHitPoints();
	max.getEnergyPoints();

	std::cout << std::endl;
	return (0);
}