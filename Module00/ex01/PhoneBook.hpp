/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:36:15 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/17 23:52:59 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <limits>
# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact		_contacts[8];
		int			_index;
		int			_displayContact();
		std::string	_insertData(std::string, bool);
		std::string	_dataFormat(std::string);

	public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	searchContact();
};

#endif