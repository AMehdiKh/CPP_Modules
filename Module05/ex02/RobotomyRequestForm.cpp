/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:25:44 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 01:27:01 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("none", 1, 1)
{
	std::cout << "[+] RobotomyRequestForm Default constructor called.\n";
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
	AForm("Robotomy Request Form", 72, 45),
	_target(target)
{
	std::cout << "[+] RobotomyRequestForm Parameter constructor called.\n";
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &object ) :
	AForm(object),
	_target(object._target)
{
	std::cout << "[+] RobotomyRequestForm Copy constructor called.\n";
}

RobotomyRequestForm&	RobotomyRequestForm::operator = ( const RobotomyRequestForm &object )
{
	std::cout << "[+] RobotomyRequestForm Copy assignment operator called.\n";
	(void)object;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "[x] RobotomyRequestForm Destructor called.\n";
}

void	RobotomyRequestForm::execute( const Bureaucrat &executor ) const
{
	static int	i;

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
	if (i % 2 == 0)
		std::cout << "[*] (TAZZZZZZZZZ!!) " << this->_target << " has been robotomized.\n";
	else
		std::cout << "[*] The robotomy process for " << this->_target << " failed.\n";
	++i;
}
