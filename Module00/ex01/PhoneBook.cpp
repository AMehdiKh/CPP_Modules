/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:05:18 by ael-khel          #+#    #+#             */
/*   Updated: 2023/07/25 09:30:23 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	PhoneBook::_insertData(std::string insert_text, bool number)
{
	std::string				contact_data;
	std::string::iterator	it;

	label:
	std::cout << insert_text << ": ";
	std::getline(std::cin >> std::ws, contact_data);
	if (number && !std::cin.eof())
	{
		for (it = contact_data.begin(); it != contact_data.end(); ++it)
		{
			if (!isdigit(*it))
			{
				std::cout << "[!] Error: Invalid phone number, only digits accepted.\n";
				goto label;
			}
		}
	}
	return (contact_data);
}

void    PhoneBook::addContact(void)
{
	std::cout << "[+] To add a contact please fill out this informations:\n\n";
	_contacts[_index % 8].first_name = _insertData("[First Name]", false);
	_contacts[_index % 8].last_name = _insertData("[Last Name]", false);
	_contacts[_index % 8].nickname = _insertData("[Nickname]", false);
	_contacts[_index % 8].phone_number = _insertData("[Phone Number]", true);
	_contacts[_index % 8].darkest_secret = _insertData("[Darkest Secret]", false);
	_index += 1;
	if (!std::cin.eof())
	std::cout << "\n[+] The contact was successfully added.\n\n";
}

std::string	PhoneBook::_dataFormat(std::string data)
{
	if (data.length() > 10)
	{
		data[9] = '.';
		return (data.substr(0, 10));
	}
	return (data);
}

int    PhoneBook::_displayContact()
{
	int	contact_size;

	contact_size = _index <= 8 ? _index : 8;
	std::cout   << std::endl
				<< "|-------------[1337 PhoneBook]--------------|\n"
				<< "|-------------------------------------------|\n"
				<< "|     Index|First Name| Last Name|  Nickname|\n"
				<< "|-------------------------------------------|\n";
	if (!contact_size)
	{
		std::cout << "|          + There is no contact +          |\n";
		std::cout << "|-------------------------------------------|\n";
	}
	for (int i = 0; i < contact_size; i++)
	{
		std::cout << '|' << std::setw(10) << i + 1;
		std::cout << '|' << std::setw(10) << _dataFormat(_contacts[i].first_name);
		std::cout << '|' << std::setw(10) << _dataFormat(_contacts[i].last_name);
		std::cout << '|' << std::setw(10) << _dataFormat(_contacts[i].nickname);
		std::cout << '|' << std::endl;
		std::cout << "|-------------------------------------------|\n";
	}
	std::cout << std::endl;
	return (contact_size);
}

void	PhoneBook::searchContact()
{
	int	contact_index;
	int	contact_size;

	contact_size = _displayContact();
	while (contact_size && !std::cin.eof())
	{
		std::cout << "[?] Please select Contact's index : ";
		
		std::cin >> contact_index;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (contact_index >= 1 && contact_index <= contact_size)
		{
			contact_index -= 1;
			std::cout << std::endl;
			std::cout << "[#] First name\t\t: " << _contacts[contact_index].first_name << '\n';
			std::cout << "[#] Last name\t\t: " << _contacts[contact_index].last_name << '\n';
			std::cout << "[#] Nickname\t\t: " << _contacts[contact_index].nickname << '\n';
			std::cout << "[#] Phone number\t: " << _contacts[contact_index].phone_number << '\n';
			std::cout << "[#] Darkest secret\t: " << _contacts[contact_index].darkest_secret << '\n';
			std::cout << std::endl;
			break ;
		}
		std::cout << "\n[!] Error: " << contact_index << ": Is invalid index.\n";
	}
}
