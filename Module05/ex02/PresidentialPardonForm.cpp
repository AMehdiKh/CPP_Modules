/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:25:36 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 01:26:45 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("none", 1, 1)
{
	std::cout << "[+] PresidentialPardonForm Default constructor called.\n";
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) :
	AForm("Presidential Pardon Form", 25, 5),
	_target(target)
{
	std::cout << "[+] PresidentialPardonForm Parameter constructor called.\n";
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &object ) :
	AForm(object),
	_target(object._target)
{
	std::cout << "[+] PresidentialPardonForm Copy constructor called.\n";
}

PresidentialPardonForm&	PresidentialPardonForm::operator = ( const PresidentialPardonForm &object )
{
	std::cout << "[+] PresidentialPardonForm Copy assignment operator called.\n";
	(void)object;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "[x] PresidentialPardonForm Destructor called.\n";
}

void	PresidentialPardonForm::execute( const Bureaucrat &executor ) const
{
	if (this->getSigned() == false)
	{
		std::cerr << "[!] Exception throwed.\n";
		throw ( AForm::FormNotSignedException() );
	}
	else if (this->getExecGrade() < executor.getGrade())
	{
		std::cerr << "[!] Exception throwed.\n";
		throw ( AForm::GradeTooLowException() );
	}
	std::cout << "[*] The " << this->_target << " has been pardoned by Zaphod Beeblebrox.\n";
}
