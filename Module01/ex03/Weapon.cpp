/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 04:14:16 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/23 15:07:28 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}

const std::string&	Weapon::getType( void ) const
{
	return (this->_type);
}

