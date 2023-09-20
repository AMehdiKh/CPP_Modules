/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:59:06 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/19 19:48:48 by ael-khel         ###   ########.fr       */
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
		~Cure();

		Cure*		clone( void ) const;
		void		use( ICharacter& );

		Cure&	operator = ( const Cure & );

};

#endif