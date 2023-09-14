/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:41:41 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/14 19:40:34 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : virtual public	ClapTrap {

	public	:

		FragTrap( void );
		FragTrap( std::string );
		FragTrap( const FragTrap & );
		~FragTrap();

		void		attack( const std::string& );
		void		highFivesGuy( void );

		FragTrap&	operator = ( const FragTrap & );

};

#endif