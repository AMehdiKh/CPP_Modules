/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:30:37 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/22 09:48:32 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) { }

Span::Span( unsigned size ) : _size(size) { }

Span::Span( const Span &obj ) : _span(obj._span), _size(obj._size) { }

Span::~Span( ) { }

Span&	Span::operator = ( const Span &obj )
{
	if (this != &obj)
	{
		this->_span = obj._span;
		this->_size = obj._size;
	}
	return (*this);
}

void	Span::addNumber( int num )
{
	if (this->_span.size() == this->_size)
		throw (std::out_of_range("Span::addNumber(): Span is full."));
	this->_span.push_back(num);
}

void	Span::addNumber( std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end )
{
	if (this->_span.size() == this->_size)
		throw (std::out_of_range("Span::addNumber(): Span is full."));
	if (this->_size - this->_span.size() < static_cast<unsigned>(end - begin) )
		throw (std::out_of_range("Span::addNumber(): Span has no enough spaces."));
	this->_span.insert(this->_span.end(), begin, end);
}

unsigned	Span::shortestSpan( void )
{
	unsigned	shortestSpan;

	if (this->_span.size() < 2)
		throw (std::out_of_range("Span::shortestSpan(): Span has less than 2 elements."));
	shortestSpan = Span::longestSpan();
	for (std::vector<int>::const_iterator i(this->_span.begin()); i != this->_span.end(); ++i)
		for (std::vector<int>::const_iterator j(i + 1); j != this->_span.end(); ++j)
			if (std::abs(*i - *j) < shortestSpan)
				shortestSpan = std::abs(*i - *j);
	return (shortestSpan);
}

unsigned	Span::longestSpan( void )
{
	if (this->_span.size() < 2)
		throw (std::out_of_range("Span::longestSpan(): Span has less than 2 elements."));
	return (*std::max_element(this->_span.begin(), this->_span.end())
			- *std::min_element(this->_span.begin(), this->_span.end()));
}
