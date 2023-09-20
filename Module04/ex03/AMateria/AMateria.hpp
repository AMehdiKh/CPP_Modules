/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:10:35 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/19 16:23:27 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class	AMateria {

	protected	:

		std::string	_type;

	public	:

		AMateria( void );
		AMateria( std::string const & );
		AMateria( const AMateria & );
		virtual	~AMateria();

		const std::string&	getType( void ) const;

		virtual AMateria*	clone() const = 0;
		virtual void		use( ICharacter& );

		AMateria&	operator = ( const AMateria & );

};

#endif