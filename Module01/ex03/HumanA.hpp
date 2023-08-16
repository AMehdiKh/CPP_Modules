/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 04:14:20 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/11 06:54:20 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

	private:
		std::string	_name;
		Weapon		&_weapon;

	public:
		HumanA( std::string name, Weapon& weapon );
		void	attack( void ) const;
		void	setWeapon( Weapon& weapon );

};

#endif