/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 04:14:26 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/11 06:54:41 by ael-khel         ###   ########.fr       */
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
		void				setType( std::string type );
		const std::string&	getType( void ) const;

};

#endif