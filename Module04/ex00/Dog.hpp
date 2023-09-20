/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:28:38 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/17 11:20:37 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
#include "Animal.hpp"

class	Dog : public    Animal {

	public	:

		Dog( void );
		Dog( const Dog & );
		~Dog();

		void	makeSound( void ) const;

		Dog&	operator = ( const Dog & );

};

#endif