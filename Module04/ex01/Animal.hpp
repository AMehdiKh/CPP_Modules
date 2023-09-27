/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:30:58 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 11:38:04 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal {

	protected	:

		std::string	_type;

	public	:

		Animal( void );
		Animal( const Animal & );
		virtual ~Animal();

		virtual void		makeSound( void ) const;

		const std::string&	getType( void ) const;

		Animal&	operator = ( const Animal & );

};

#endif