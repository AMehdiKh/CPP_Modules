/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:27:52 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/04 18:42:49 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class   ScavTrap : public   ClapTrap {

	private	:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;


	public	:

    	ClapTrap( void );
		ClapTrap( std::string );
		ClapTrap( const ClapTrap & );
		~ClapTrap();

		void		attack( const std::string& );
		void		takeDamage( unsigned int );
		void		beRepaired( unsigned int );

		ClapTrap&	operator = ( const ClapTrap & );

};

#endif