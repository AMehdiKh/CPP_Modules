/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:34:45 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/27 11:58:56 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : public	AAnimal {

	private :

		Brain	*catBrain;

	public	:

		Cat( void );
		Cat( const Cat & );
		virtual	~Cat();

		virtual	void	makeSound( void ) const;

		Cat&	operator = ( const Cat & );

};

#endif