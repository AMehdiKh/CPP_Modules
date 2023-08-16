/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 02:03:03 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/11 03:46:04 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

	private:
		std::string	_name;

	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		void    setName( std::string name );
		void	announce( void );

};

#endif