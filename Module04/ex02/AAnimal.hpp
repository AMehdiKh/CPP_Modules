/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:30:58 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 11:38:04 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class	AAnimal {

	protected	:

		std::string	_type;

	public	:

		AAnimal( void );
		AAnimal( const AAnimal & );
		virtual ~AAnimal();

		virtual	void		makeSound( void ) const = 0;

		const std::string&	getType( void ) const;

		AAnimal&	operator = ( const AAnimal & );

};

#endif