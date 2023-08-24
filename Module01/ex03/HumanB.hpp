/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 04:14:23 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/24 23:00:46 by ael-khel         ###   ########.fr       */
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
		~HumanB( void );
		void	attack( void ) const;
		void	setWeapon(Weapon& weapon);

};

#endif