/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 06:56:24 by ael-khel          #+#    #+#             */
/*   Updated: 2023/08/24 22:45:48 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	ft_replace(char **av)
{
	std::string		inFileName (av[1]);
	std::string		outFileName (inFileName + ".replace");
	std::string		oldString (av[2]);
	std::string 	newString (av[3]);
	std::string 	line;
	std::ifstream	inputFile;
	std::ofstream	outputFile;

	inputFile.open(av[1]);
	if (!inputFile.is_open())
	{
		std::cerr << "Error: " << inFileName << ": file can't be opened.\n";
		return (1);
	}
	if (inputFile.peek() == std::ifstream::traits_type::eof())
	{
		std::cerr << "Error: " << inFileName << ": file is empty.\n";
		return (1);
	}
	outputFile.open(outFileName.c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Error: " << outFileName << ": file can't be opened.\n";
		return (1);
	}
	while (getline(inputFile, line, '\0'))
	{
		while ((oldString != newString) && (line.find(oldString) != std::string::npos))
		{
			size_t	pos = line.find(oldString);
			line.erase(pos, oldString.length());
			line.insert(pos, newString);
		}
		outputFile << line;
	}
	inputFile.close();
	outputFile.close();
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "usage: ./replace <filename> \"old string\" \"new string\".\n";
		return (1);
	}
	if (!av[2][0])
	{
		std::cerr << "Error: The old string argument is empty.\n";
		return (1);
	}
	return (ft_replace(av));
}
