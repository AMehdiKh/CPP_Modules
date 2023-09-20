/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:46:32 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/20 11:34:53 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class	Character : public	ICharacter {

	private	:

		std::string	_name;
		Character	*_inventory[4];

	public	:

		Character( void );
		Character( std::string const & );
		Character( const Character & );
		~Character();

		const std::string&	getName( void ) const;

		void				equip( AMateria* );
		void				unequip( int );
		void				use( int, ICharacter& );

		Character&			operator = ( const Character & );

};

#endif