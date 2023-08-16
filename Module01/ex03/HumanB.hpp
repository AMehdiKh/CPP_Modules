/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 04:14:23 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/11 06:54:32 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

	private:
		std::string	_name;
		Weapon		*_weapon;

	public:
		HumanB( std::string name );
		void	attack( void ) const;
		void	setWeapon(Weapon& weapon);

};

#endif