/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 00:17:49 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 00:54:31 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>
# include <fstream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm {
	
	private	:

		const std::string	_name;
		const int			_signGrade;
		const int			_execGrade;
		bool				_signed;

		AForm( void );

	public	:

		AForm( std::string, int, int );
		AForm( const AForm & );
		virtual ~AForm( );


		const std::string&	getName( void ) const;
		const int&			getSignGrade( void ) const;
		const int&			getExecGrade( void ) const;
		const bool&			getSigned( void ) const;

		void				beSigned( const Bureaucrat & );
		virtual void		execute( const Bureaucrat & ) const = 0;

		class	GradeTooHighException : public	std::exception {

			public	:

				virtual	const char*	what() const throw()
				{
					return ("Grade Too High.\n");
				}

		};

		class	GradeTooLowException : public		std::exception {

			public	:

				virtual	const char*	what() const throw()
				{
					return ("Grade Too Low.\n");
				}

		};

		class	FormNotSignedException : public		std::exception {

			public	:

				virtual	const char*	what() const throw()
				{
					return ("Form Not Signed Yet.\n");
				}

		};

		AForm&			operator = ( const AForm & );
};

std::ostream&	operator << ( std::ostream &outStream, const AForm& object );

#endif