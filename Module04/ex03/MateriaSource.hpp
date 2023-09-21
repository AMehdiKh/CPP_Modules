/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:35:12 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/21 12:43:21 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class	MateriaSource : public	IMateriaSource {

	private	:

		AMateria	*_memory[4];

	public	:

		MateriaSource( void );
		MateriaSource( const MateriaSource & );
		~MateriaSource();

		void		learnMateria( AMateria* );
		AMateria*	createMateria(  std::string const & );

		MateriaSource&			operator = ( const MateriaSource & );

};

#endif
