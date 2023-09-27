/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:29:12 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 18:42:17 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class	Ice : public	AMateria {

	public	:

		Ice( void );
		Ice( const Ice & );
		virtual	~Ice();

		virtual	AMateria*	clone( void ) const;
		virtual	void		use( ICharacter& );

		Ice&	operator = ( const Ice & );

};

#endif