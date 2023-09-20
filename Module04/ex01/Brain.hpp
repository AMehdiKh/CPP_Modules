/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:09:59 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/17 18:19:21 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain {

	private	:

		std::string	_ideas[100];

	public	:

		Brain( void );
		Brain( const Brain & );
		~Brain();

		Brain&	operator = ( const Brain & );

};

#endif