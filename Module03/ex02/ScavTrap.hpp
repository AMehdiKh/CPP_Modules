/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:27:52 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/13 18:09:33 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public	ClapTrap {

	public	:

		ScavTrap( void );
		ScavTrap( std::string );
		ScavTrap( const ScavTrap & );
		~ScavTrap();

		void		attack( const std::string& );
		void		guardGate( void );

		ScavTrap&	operator = ( const ScavTrap & );

};

#endif