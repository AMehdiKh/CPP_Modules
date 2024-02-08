/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 00:17:47 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 00:28:20 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _signGrade(1), _execGrade(1)
{
	std::cout << "[+] Form Default constructor called.\n";
}

Form::Form( std::string name, int signGrade, int execGrade ) :
	_name(name),
	_signGrade(signGrade),
	_execGrade(execGrade),
	_signed(false)
{
	std::cout << "[+] Form " << this->_name << " Parameter constructor called.\n";

	if (this->_signGrade > 150 || this->_execGrade > 150)
	{
		std::cerr << "[!] Exception throwed.\n";
		throw( Form::GradeTooLowException() );
	}
	else if (this->_signGrade < 1 || this->_execGrade < 1)
	{
		std::cerr << "[!] Exception throwed.\n";
		throw( Form::GradeTooHighException() );
	}
}

Form::Form( const Form &object ) :
	_name(object._name),
	_signGrade(object._signGrade),
	_execGrade(object._execGrade),
	_signed(object._signed)
{
	std::cout << "[+] Form " << this->_name << " Copy constructor called.\n";
}

Form&			Form::operator = ( const Form &object )
{
	std::cout << "[+] Form " << this->_name << " Copy assignment operator called.\n";
	if (this != &object)
		this->_signed = object._signed;
	return (*this);
}

Form::~Form()
{
	std::cout << "[x] Form " << this->_name << " Destructor called.\n";
}

void				Form::beSigned( const Bureaucrat &object )
{
	if (this->_signGrade >= object.getGrade())
		this->_signed = true;
	else
	{
		std::cerr << "[!] Exception throwed.\n";
		throw( Form::GradeTooLowException() );
	}
}

const std::string&	Form::getName( void ) const
{
	return (this->_name);
}

const int&			Form::getSignGrade( void ) const
{
	return (this->_signGrade);
}

const int&			Form::getExecGrade( void ) const
{
	return (this->_execGrade);
}

const  bool&		Form::getSigned( void ) const
{
	return (this->_signed);
}

std::ostream&	operator << ( std::ostream &outStream, const Form& object )
{
	outStream << "* Form name : " << object.getName() << ".\n";
	outStream << "* Form grade required to sign it : " << object.getSignGrade() << ".\n";
	outStream << "* Form grade required to execute it : " << object.getExecGrade() << ".\n";
	outStream << "* Form sign status : " << object.getSigned() << ".\n";

	return (outStream);
}
