/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 00:17:49 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/17 23:11:10 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class	Form {
	
	private	:

		const std::string	_name;
		const int			_signGrade;
		const int			_execGrade;
		bool				_signed;

		Form( void );

	public	:

		Form( std::string, int, int );
		Form( const Form & );
		~Form( );


		const std::string&	getName( void ) const;
		const int&			getSignGrade( void ) const;
		const int&			getExecGrade( void ) const;
		const bool&			getSigned( void ) const;
		void				beSigned( const Bureaucrat & );
		
		class GradeTooHighException : public	std::exception {

			public	:

				virtual	const char*	what() const throw()
				{
					return ("Grade Too High.\n");
				}

		};

		class GradeTooLowException : public		std::exception {

			public	:

				virtual	const char*	what() const throw()
				{
					return ("Grade Too Low.\n");
				}

		};

		Form&				operator = ( const Form & );
};

std::ostream&	operator << ( std::ostream &outStream, const Form& object );

#endif