/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:28:38 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 11:52:40 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public	Animal {

	private :

		Brain	*dogBrain;

	public	:

		Dog( void );
		Dog( const Dog & );
		virtual	~Dog();

		virtual	void	makeSound( void ) const;

		Dog&	operator = ( const Dog & );

};

#endif