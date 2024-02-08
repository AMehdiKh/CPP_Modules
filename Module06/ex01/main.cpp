/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:31:36 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/01 02:14:20 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iomanip>

int	main( void )
{
	Data		my_data;
	uintptr_t	serial_number;

	serial_number = Serializer::serialize( &my_data );
	std::cout << "my_data serial number is : " << serial_number << std::endl;
	std::cout << "Name\t: " << Serializer::deserialize(serial_number)->name << std::endl;
	std::cout << "Age\t: " << Serializer::deserialize(serial_number)->age << std::endl;

	return (0);
}