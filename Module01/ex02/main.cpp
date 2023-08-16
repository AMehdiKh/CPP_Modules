/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 03:58:05 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/11 04:06:25 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string stringVAR = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringVAR;
	std::string &stringREF = stringVAR;
	
	std::cout << &stringVAR << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << stringVAR << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	
	return (0);
}
