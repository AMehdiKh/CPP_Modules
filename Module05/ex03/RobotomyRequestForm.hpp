/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:20:06 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 00:21:58 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class	RobotomyRequestForm : public	AForm {

	private :

		const std::string	_target;

		RobotomyRequestForm( void );

	public	:

		RobotomyRequestForm( std::string );
		RobotomyRequestForm( const RobotomyRequestForm & );
		virtual	~RobotomyRequestForm( );

		virtual void	execute( const Bureaucrat& ) const;

		RobotomyRequestForm&	operator = ( const RobotomyRequestForm & );

};

#endif