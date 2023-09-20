/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:28:38 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/17 20:47:16 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog : public	AAnimal {

	private :

		Brain	*dogBrain;

	public	:

		Dog( void );
		Dog( const Dog & );
		~Dog();

		void	makeSound( void ) const;

		Dog&	operator = ( const Dog & );

};

#endif