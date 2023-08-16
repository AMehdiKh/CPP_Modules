/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 23:43:06 by ael-khel          #+#    #+#             */
/*   Updated: 2023/07/25 20:27:19 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0)
{
	// _index = 0;
	std::cout << "|--------------[Welcome to 1337 PhoneBook]--------------|\n";
    std::cout << "|# [ADD]    = Save a new contact to 1337 PhoneBook.     |\n";
    std::cout << "|# [SEARCH] = Display a specific contact.               |\n";
    std::cout << "|# [EXIT]   = Close 1337 PhoneBook.                     |\n";
    std::cout << "|-------------------------------------------------------|\n";
	std::cout << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "\n[+] 1337 PhoneBook closed.\n";
}

int main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	//[!] CHECK THE EOF ERROR IN SCHOOL MAC.
	while (!std::cin.eof())
	{
		std::cout << "[?] Please enter the command: ";
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