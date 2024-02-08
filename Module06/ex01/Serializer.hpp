/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 01:08:03 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/02 18:08:27 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <cstdint>

struct	Data {

	std::string	name;
	int			age;
	
	Data (void) : name("Mehdi"), age(20) {}

};

class	Serializer {

	private	:

		Serializer( void );

	public	:

		static uintptr_t	serialize( Data* );
		static Data*		deserialize( uintptr_t );

};

#endif