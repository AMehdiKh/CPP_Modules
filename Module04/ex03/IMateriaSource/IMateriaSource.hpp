/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:05:31 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/20 11:46:14 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class	IMateriaSource {

	public	:

		virtual ~IMateriaSource() {}

		virtual void		learnMateria( AMateria* ) = 0;
		virtual AMateria*	createMateria( std::string const & ) = 0;

};

#endif