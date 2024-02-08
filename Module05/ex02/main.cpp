/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:20:54 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 00:03:23 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main( void )
{
	Bureaucrat				mehdi("MEHDI", 1);
	ShrubberyCreationForm	tree("Garden");

	mehdi.executeForm(tree);
	mehdi.signForm(tree);
	mehdi.executeForm(tree);

	return (0);
}
