/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:21:09 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 00:21:47 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm : public	AForm {

	private :

		const std::string	_target;

		PresidentialPardonForm( void );

	public	:

		PresidentialPardonForm( std::string );
		PresidentialPardonForm( const PresidentialPardonForm & );
		virtual	~PresidentialPardonForm( );

		virtual void	execute( const Bureaucrat& ) const;

		PresidentialPardonForm&	operator = ( const PresidentialPardonForm & );

};

#endif