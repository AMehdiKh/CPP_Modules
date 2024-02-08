/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:25:04 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 01:27:14 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("none", 1, 1)
{
	std::cout << "[+] ShrubberyCreationForm Default constructor called.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) :
	AForm("Shrubbery Creation Form", 145, 137),
	_target(target)
{
	std::cout << "[+] ShrubberyCreationForm Parameter constructor called.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &object ) :
	AForm(object),
	_target(object._target)
{
	std::cout << "[+] ShrubberyCreationForm Copy constructor called.\n";
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator = ( const ShrubberyCreationForm &object )
{
	std::cout << "[+] ShrubberyCreationForm Copy assignment operator called.\n";
	(void)object;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "[x] ShrubberyCreationForm Destructor called.\n";
}

void	ShrubberyCreationForm::execute( const Bureaucrat &executor ) const
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
	std::ofstream	treeFile((this->_target + "_shrubbery").c_str());
	treeFile << "                          ★                          " << std::endl;
	treeFile << ".    .       .      .     #       .      .     .     " << std::endl;
	treeFile << "   .     .     . ★       ###       ★    .     .     ." << std::endl;
	treeFile << "      .      .   '#:. .:##'##:. .:#'  .      .    .  " << std::endl;
	treeFile << "  .       .  ★   . '####'###'####'  .  ★  .    .    ." << std::endl;
	treeFile << "       .     '#:.    .:#'###'#:.    .:#'    .      . " << std::endl;
	treeFile << "  .     .    ★  '#########'#########'  ★     .      ." << std::endl;
	treeFile << "  .      .   '#:.  '####'###'####'  .:#'    .    .   " << std::endl;
	treeFile << "     .     .  '#######''##'##''#######'  .     .    ." << std::endl;
	treeFile << " .      ★       .'##'#####'#####'##'        ★  .   . " << std::endl;
	treeFile << "    .   '#:. ...  .:##'###'###'##:.  ... .:#'    .   " << std::endl;
	treeFile << ".      .    '#######'##'#####'##'#######'     .     ." << std::endl;
	treeFile << "    .    .     '#####''#######''#####'    .      .   " << std::endl;
	treeFile << " .    .      .     '     000      '    .        .    " << std::endl;
	treeFile << ".      .         .   .   000     .        .       .  " << std::endl;
	treeFile << "........................O000O........................" << std::endl;
	treeFile << "....................[★Shrubbery★]...................." << std::endl;
	treeFile << "....................................................." << std::endl;
	treeFile.close();
}
