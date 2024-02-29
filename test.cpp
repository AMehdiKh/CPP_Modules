/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:10:20 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/29 08:43:27 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>

int	main()
{
	std::string a("   .34.6fg   ");
	char *rest;

	double b = strtod(a.c_str(), &rest);
	
	std::cout << b << "   " << rest;
	

	
}