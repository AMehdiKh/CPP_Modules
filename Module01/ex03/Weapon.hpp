/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 04:14:26 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/24 23:01:07 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

	private:
		std::string	_type;

	public:
		Weapon( std::string type);
		~Weapon( void );
		void				setType( std::string type );
		const std::string&	getType( void ) const;

};

#endif