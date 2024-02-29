/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 03:10:09 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/29 09:11:13 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>
#include <string>

BitcoinExchange::BitcoinExchange( void )
{
	std::ifstream	dataBaseFile;

	this->_openFile( dataBaseFile, "data.csv" );
	this->_insertDataBase( dataBaseFile );
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange &obj ) : _dataBase(obj._dataBase) { }

BitcoinExchange::~BitcoinExchange( ) { }

BitcoinExchange&	BitcoinExchange::operator = ( const BitcoinExchange &obj )
{
	return (*this);
}

void	BitcoinExchange::_openFile( std::ifstream &file, const std::string &fileName )
{
	file.open(fileName.c_str());
	if (!file.is_open())
		throw (std::invalid_argument("Error: " + fileName + ": Could not open the file."));
	if (file.peek() == std::ifstream::traits_type::eof())
		throw (std::invalid_argument("Error: " + fileName + ": File is empty."));
}

void	BitcoinExchange::_insertDataBase( std::ifstream &dataBaseFile )
{
	std::string	line;

	std::getline(dataBaseFile, line);
	while (std::getline(dataBaseFile, line))
	{
		std::string	dateKey;
		double		rateValue;

		dateKey = line.substr(0, line.find(','));
		rateValue = std::strtod(line.substr(line.find(',') + 1).c_str(), NULL);

		this->_dataBase.insert(std::pair<std::string, double>(dateKey, rateValue));
	}
}

void	BitcoinExchange::run( const std::string inputFileName )
{
	std::ifstream	inputFile;

	this->_openFile( inputFile, inputFileName );
	this->_exchange( inputFile );
}

void	BitcoinExchange::_exchange( std::ifstream &inputFile )
{
	std::string	line;
	std::string	dateKey;
	double		amountValue;

	while (std::getline(inputFile, line))
	{
		if (line.empty())
			continue ;
		try
		{
			dateKey = this->_parseDate(line);
			amountValue = this->_checkAmount(line);
		}
		catch ( std::exception &e )
		{
			std::cerr << e.what() << std::endl;
			continue ;
		}

		std::cout << std::endl;
	}
}

std::string	BitcoinExchange::_parseDate( const std::string &line)
{
	long	year, month, day;
	char	*rest;

	std::string::size_type	pipe = line.find('|');
	if ( pipe == std::string::npos || pipe != line.rfind('|') || pipe < 8 )
		throw ( BitcoinExchange::parse_error("Error: bad input => " + line) );
	std::string	date = line.substr(0, pipe);
	// trim date
	std::string dateKey = date; // after trimming
	// if find(' ') true throw error if space exist... wait but why !!!!!

	year = std::strtol(date.c_str(), &rest, 10);
	date = rest;
	month = -std::strtol(date.c_str(), &rest, 10);
	date = rest;
	day = -std::strtol(date.c_str(), &rest, 10);
	if (*rest)
		throw ( BitcoinExchange::parse_error("Error: bad input => " + line) );
	this->_checkDate(line, year, month, day);
	return (dateKey);
}

void	BitcoinExchange::_checkDate(const std::string &line, int year, int month, int day)
{
	std::time_t	current_time;
	std::tm		*local_time;
	int			curr_year;
	int			curr_month;
	int			curr_day;
    int			daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	daysInMonth[2] = this->_isLeapYear(year) ? 29 : 28;
	std::time(&current_time);
	local_time = std::localtime(&current_time);
	curr_year = local_time->tm_year + 1900;
	curr_month = local_time->tm_mon + 1;
	curr_day = local_time->tm_mday;
	if (year > curr_year || year < 2009)
		throw ( BitcoinExchange::parse_error("Error: bad input => " + line) );
	if (month < 1 || month > 12 || (year == curr_year && month > curr_month))
		throw ( BitcoinExchange::parse_error("Error: bad input => " + line) );
	if (day < 1 || day > daysInMonth[month] || (year == curr_year && month == curr_month && day > curr_day))
		throw ( BitcoinExchange::parse_error("Error: bad input => " + line) );
}

double		BitcoinExchange::_checkAmount( const std::string &line )
{
	double		amountValue;
	char		*rest;
	std::string amount;

	amount = line.substr(line.find('|') + 1);
	//trim amount
	if (amount.empty())
		throw ( BitcoinExchange::parse_error("Error: bad input => " + line) );
	amountValue = strtod(amount.c_str(), &rest);
	if (*rest)
		throw ( BitcoinExchange::parse_error("Error: bad input => " + line) );
	if (amountValue < 0)
		throw ( BitcoinExchange::parse_error("Error: not a positive number.") );
	if (amountValue > 1000)
		throw ( BitcoinExchange::parse_error("Error: too large number.") );

	return (amountValue);
}

bool	BitcoinExchange::_isLeapYear(int year)
{
	return ();
}