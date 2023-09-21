/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:46:32 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/21 17:05:45 by ael-khel         ###   ########.fr       */
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
		AMateria	*_inventory[4];
		bool		_unequiped[4];

		void		_freeUnequiped( void );

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
