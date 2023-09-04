/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:30:58 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/04 00:53:19 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class   ClapTrap {

	private	:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

		ClapTrap( void );

	public	:

		ClapTrap( std::string );
		ClapTrap( const ClapTrap & );
		~ClapTrap();

		void		attack( const std::string& );
		void		takeDamage( unsigned int );
		void		beRepaired( unsigned int );

		ClapTrap&	operator = ( const ClapTrap & );

};

#endif