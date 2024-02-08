/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:20:52 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/17 23:06:03 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class	Form;

class	Bureaucrat {
	
	private	:

		const std::string	_name;
		int					_grade;

		Bureaucrat( void );

	public	:

		Bureaucrat( std::string, int );
		Bureaucrat( const Bureaucrat & );
		~Bureaucrat( );

		const std::string&	getName( void ) const;
		const int&			getGrade( void ) const;
		
		void				downGrade( void );
		void				upGrade( void );

		void				signForm( Form & ) const;

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

		Bureaucrat&			operator = ( const Bureaucrat & );
};

std::ostream&	operator << ( std::ostream &outStream, const Bureaucrat& object );

#endif