/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 23:43:06 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/18 03:55:01 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	while (!std::cin.eof())
	{
		std::cout << "[?] Please enter the command and press ENTER: ";
		getline(std::cin >> std::ws, command);
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "\n[!] Error: invalid command.\n";
	}
	return (0);
}