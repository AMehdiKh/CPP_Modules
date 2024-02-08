/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:33:14 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 00:22:09 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class	ShrubberyCreationForm : public	AForm {

	private :

		const std::string	_target;

		ShrubberyCreationForm( void );

	public	:

		ShrubberyCreationForm( std::string );
		ShrubberyCreationForm( const ShrubberyCreationForm & );
		virtual	~ShrubberyCreationForm( );

		virtual void	execute( const Bureaucrat& ) const;

		ShrubberyCreationForm&	operator = ( const ShrubberyCreationForm & );

};

#endif