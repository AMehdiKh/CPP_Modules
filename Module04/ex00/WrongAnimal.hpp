/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:54:17 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 11:31:35 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal {

	protected	:

		std::string	_type;

	public	:

		WrongAnimal( void );
		WrongAnimal( const WrongAnimal & );
		virtual ~WrongAnimal();

		void		makeSound( void ) const;

		const std::string&	getType( void ) const;

		WrongAnimal&	operator = ( const WrongAnimal & );

};

#endif