/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:20:49 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 01:34:49 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	std::cout << "[+] Bureaucrat Default constructor called.\n";
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
	std::cout << "[+] Bureaucrat " << this->_name << " Parameter constructor called.\n";

	if (this->_grade > 150)
	{
		this->_grade = 150;
		std::cerr << "[!] Exception throwed.\n";
		throw( Bureaucrat::GradeTooLowException() );
	}
	else if (this->_grade < 1)
	{
		this->_grade = 1;
		std::cerr << "[!] Exception throwed.\n";
		throw( Bureaucrat::GradeTooHighException() );
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat &object ) : _name(object._name), _grade(object._grade)
{
	std::cout << "[+] Bureaucrat " << this->_name << " Copy constructor called.\n";
}

Bureaucrat&			Bureaucrat::operator = ( const Bureaucrat &object )
{
	std::cout << "[+] Bureaucrat " << this->_name << " Copy assignment operator called.\n";
	if (this != &object)
		this->_grade = object._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "[x] Bureaucrat " << this->_name << " Destructor called.\n";
}

const std::string&	Bureaucrat::getName( void ) const
{
	return (this->_name);
}

const int&			Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void				Bureaucrat::downGrade( void )
{
	++this->_grade;
	if (this->_grade > 150)
	{
		this->_grade = 150;
		std::cerr << "[!] Exception throwed.\n";
		throw( Bureaucrat::GradeTooLowException() );
	}
	std::cout << "[#] Bureaucrat grade successfully lowered to " << this->_grade << ".\n";
}

void				Bureaucrat::upGrade( void )
{
	--this->_grade;
	if (this->_grade < 1)
	{
		this->_grade = 1;
		std::cerr << "[!] Exception throwed.\n";
		throw( Bureaucrat::GradeTooHighException() );
	}
	std::cout << "[#] Bureaucrat grade successfully raised to " << this->_grade << ".\n";
}

void				Bureaucrat::signForm( AForm &form ) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << ".\n";
	}
	catch ( std::exception &e )
	{
		std::cerr << "[+] Exception catched.\n";
		std::cerr << this->_name << " couldn't sign "<< form.getName() << " because " << e.what();
	}
}
void				Bureaucrat::executeForm( const AForm &form ) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << ".\n";
	}
	catch ( std::exception &e )
	{
		std::cerr << "[+] Exception catched.\n";
		std::cerr << this->_name << " couldn't execute "<< form.getName() << " because " << e.what();
	}	
}

std::ostream&	operator << ( std::ostream &outStream, const Bureaucrat& object )
{
	outStream << object.getName() << ", bureaucrat grade " << object.getGrade() << ".\n";
	return (outStream);
}
