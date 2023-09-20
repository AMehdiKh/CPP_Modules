/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:57:28 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/17 11:21:08 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat : public    WrongAnimal {

	public	:

		WrongCat( void );
		WrongCat( const WrongCat & );
		~WrongCat();

		void		makeSound( void ) const;
	
		WrongCat&	operator = ( const WrongCat & );

};

#endif