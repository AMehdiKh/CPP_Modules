/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 01:18:43 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 01:18:48 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	std::cout << "[+] Intern Default constructor called.\n";
}

Intern::Intern( const Intern &object )
{
	(void)object;
	std::cout << "[+] Intern Copy constructor called.\n";
}

Intern&	Intern::operator = ( const Intern &object )
{
	std::cout << "[+] Intern Copy assignment operator called.\n";
	(void)object;
	return (*this);
}

Intern::~Intern( )
{
	std::cout << "[+] Intern Destructor called.\n";
}

AForm*	Intern::ShrubberyCreation( const std::string formTarget )
{
	return (new ShrubberyCreationForm(formTarget));
}

AForm*	Intern::RobotomyRequest( const std::string formTarget )
{
	return (new RobotomyRequestForm(formTarget));
}

AForm*	Intern::PresidentialPardon( const std::string formTarget )
{
	return (new PresidentialPardonForm(formTarget));
}

AForm*	Intern::makeForm( const std::string formName, const std::string formTarget )
{
	std::string	formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm*	(Intern::*ptrArrayFunc[3])(std::string) = {
		&Intern::ShrubberyCreation,
		&Intern::RobotomyRequest,
		&Intern::PresidentialPardon
	};
	for (int i = 0; i < 3; ++i)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*ptrArrayFunc[i])(formTarget));
		}
	}
	std::cerr << "Intern couldn't create " << formName << " form.\n";
	return (NULL);
}