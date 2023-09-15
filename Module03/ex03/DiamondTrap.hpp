/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:56:34 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/15 17:06:47 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {

	private :
	
		std::string	_name;

	public	:

		DiamondTrap( void );
		DiamondTrap( std::string );
		DiamondTrap( const DiamondTrap & );
		~DiamondTrap();

		void	attack( const std::string& );
		void	whoAmI( void );

		const std::string&	getName( void ) const;

		DiamondTrap&	operator = ( const DiamondTrap & );

};

#endif