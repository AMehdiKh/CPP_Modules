/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:10:35 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 17:59:53 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class	AMateria {

	protected	:

		std::string	_type;

	public	:

		AMateria( void );
		AMateria( std::string const & );
		AMateria( const AMateria & );
		virtual	~AMateria();

		const std::string&	getType( void ) const;

		virtual AMateria*	clone( void ) const = 0;

		virtual void		use( ICharacter& );

		AMateria&	operator = ( const AMateria & );

};

#endif