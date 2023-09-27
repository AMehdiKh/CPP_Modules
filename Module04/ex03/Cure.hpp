/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:59:06 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 18:42:19 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class	Cure : public	AMateria {

	public	:

		Cure( void );
		Cure( const Cure & );
		virtual	~Cure();

		virtual	AMateria*	clone( void ) const;
		virtual	void		use( ICharacter& );

		Cure&	operator = ( const Cure & );

};

#endif