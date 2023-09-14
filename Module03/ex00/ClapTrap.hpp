/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:30:58 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/12 17:17:33 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class   ClapTrap {

	private	:

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public	:

		ClapTrap( void );
		ClapTrap( std::string );
		ClapTrap( const ClapTrap & );
		~ClapTrap();

		void		attack( const std::string& );
		void		takeDamage( unsigned int );
		void		beRepaired( unsigned int );

		void			getHitPoints(void) const;
		void			getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;

		ClapTrap&	setAttackDamage( unsigned int );
		ClapTrap&	setEnergyPoints( unsigned int );

		ClapTrap&	operator = ( const ClapTrap & );

};

#endif