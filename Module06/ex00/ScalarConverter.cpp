/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 02:51:42 by ael-khel          #+#    #+#             */
/*   Updated: 2024/01/29 00:02:46 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::convert(const std::string &value)
{
	double	result;
	char	*rest;

	if (value.size() == 1 && !std::isdigit(value.at(0)))
	{
		std::cout << "char\t:" << (std::isprint(value.at(0)) ? value : "Non displayable") << std::endl;
		std::cout << "int\t: " << static_cast<int>(value.at(0)) << std::endl;
		std::cout << std::fixed;
		std::cout << "float\t: " << static_cast<float>(value.at(0)) << 'f' << std::endl;
		std::cout << "double\t: " << static_cast<double>(value.at(0)) << std::endl;
		return ;
	}
	result = strtod(value.c_str(), &rest);
	if (*rest && strcmp(rest, "f"))
		throw (ScalarConverter::UnknownType());
	convertChar(result);
	convertInt(result);
	convertFloat(result);
	std::cout << "double\t: " << result << std::endl;
}

void	convertChar(const double &result)
{
	if (!std::isfinite(result))
		std::cout << "char\t: impossible" << std::endl;
	else if (result < std::numeric_limits<char>::min() || result > std::numeric_limits<char>::max())
		std::cout << "char\t: impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(result)))
		std::cout << "char\t: Non displayable" << std::endl;
	else
		std::cout << "char\t: '" << static_cast<char>(result) << '\'' << std::endl;
}

void	convertInt(const double &result)
{
	if (!std::isfinite(result))
		std::cout << "int\t: impossible" << std::endl;
	else if (result < std::numeric_limits<int>::min() || result > std::numeric_limits<int>::max())
		std::cout << "int\t: impossible" << std::endl;
	else
		std::cout << "int\t: " << static_cast<int>(result) << std::endl;
}

void	convertFloat(const double &result)
{
	std::cout << std::fixed;
	if (!std::isfinite(result))
		std::cout << "float\t: " << result << 'f' << std::endl;
	else if (result < -std::numeric_limits<float>::max() || result > std::numeric_limits<float>::max()) // "lowest() [since C++11]" not defined for C++98 so I use "-max()" as defined in <limits> header
		std::cout << "float\t: impossible" << std::endl;
	else
		std::cout << "float\t: " << static_cast<float>(result) << 'f' << std::endl;
}
