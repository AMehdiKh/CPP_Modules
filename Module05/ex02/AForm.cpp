/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 00:17:47 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 00:29:22 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ) : _signGrade(1), _execGrade(1)
{
	std::cout << "[+] AForm Default constructor called.\n";
}

AForm::AForm( std::string name, int signGrade, int execGrade ) :
	_name(name),
	_signGrade(signGrade),
	_execGrade(execGrade),
	_signed(false)
{
	std::cout << "[+] AForm " << this->_name << " Parameter constructor called.\n";

	if (this->_signGrade > 150 || this->_execGrade > 150)
	{
		std::cerr << "[!] Exception throwed.\n";
		throw( AForm::GradeTooLowException() );
	}
	else if (this->_signGrade < 1 || this->_execGrade < 1)
	{
		std::cerr << "[!] Exception throwed.\n";
		throw( AForm::GradeTooHighException() );
	}
}

AForm::AForm( const AForm &object ) :
	_name(object._name),
	_signGrade(object._signGrade),
	_execGrade(object._execGrade),
	_signed(object._signed)
{
	std::cout << "[+] AForm " << this->_name << " Copy constructor called.\n";
}

AForm&			AForm::operator = ( const AForm &object )
{
	std::cout << "[+] AForm " << this->_name << " Copy assignment operator called.\n";
	if (this != &object)
		this->_signed = object._signed;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "[x] AForm " << this->_name << " Destructor called.\n";
}

void				AForm::beSigned( const Bureaucrat &object )
{
	if (this->_signGrade >= object.getGrade())
		this->_signed = true;
	else
	{
		std::cerr << "[!] Exception throwed.\n";
		throw( AForm::GradeTooLowException() );
	}
}

const std::string&	AForm::getName( void ) const
{
	return (this->_name);
}

const int&			AForm::getSignGrade( void ) const
{
	return (this->_signGrade);
}

const int&			AForm::getExecGrade( void ) const
{
	return (this->_execGrade);
}

const  bool&		AForm::getSigned( void ) const
{
	return (this->_signed);
}

std::ostream&	operator << ( std::ostream &outStream, const AForm& object )
{
	outStream << "* AForm name : " << object.getName() << ".\n";
	outStream << "* AForm grade required to sign it : " << object.getSignGrade() << ".\n";
	outStream << "* AForm grade required to execute it : " << object.getExecGrade() << ".\n";
	outStream << "* AForm sign status : " << object.getSigned() << ".\n";

	return (outStream);
}
