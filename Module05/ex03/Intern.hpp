/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 01:18:29 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 01:18:17 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern {

	public	:

		Intern( void );
		Intern( const Intern & );
		~Intern( );

		AForm*	ShrubberyCreation( const std::string );
		AForm*	RobotomyRequest( const std::string );
		AForm*	PresidentialPardon( const std::string );
		AForm*	makeForm( const std::string, const std::string );

		Intern&	operator = ( const Intern & );
};

#endif