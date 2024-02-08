/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:40:04 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/01 18:06:59 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
	int			arr[] = { 1, 3, 3, 7 }; 
	char 		name[] = { 'M', 'E', 'H', 'D', 'I' };

	std::cout << "int *:" << std::endl; 
	iter(arr, sizeof(arr) / sizeof(int), print);
	std::cout << std::endl;

	std::cout << "std::string *:" << std::endl;
	iter(name, sizeof(name), print);
	std::cout << std::endl;

	return (0);
}

