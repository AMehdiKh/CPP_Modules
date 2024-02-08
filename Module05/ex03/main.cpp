/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:20:54 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/18 00:53:08 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main( void )
{
	Bureaucrat	mehdi("MEHDI", 1);
	Intern		ahmed;
	AForm		*form;

	form = ahmed.makeForm("shrubbery creation", "Home");
	mehdi.signForm(*form);
	mehdi.executeForm(*form);
	delete form;
	return (0);
}
