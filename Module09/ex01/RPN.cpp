/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 03:27:05 by ael-khel          #+#    #+#             */
/*   Updated: 2024/03/08 23:23:55 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ) { }

RPN::RPN( const RPN &obj )
{
	(void)obj;
}

RPN::~RPN( ) { }

RPN&	RPN::operator = ( const RPN &obj )
{
	(void)obj;
	return ( *this );
}

RPN::RPN( std::string rpn )
{
	rpn += " ";														// to guarantee not accessing rpn.end() while looking for ' ' (space) with iterators (*(iter + 1) avoid segfault in condition)
	std::string validChars( "+-*/0123456789" );
	while ( rpn.find_first_of( validChars ) != std::string::npos )
	{
		std::string::iterator	iter;

		iter = std::find_first_of( rpn.begin(), rpn.end(), validChars.begin(), validChars.end() );

		if ( std::isdigit( *iter ) && *(iter + 1) == ' ' )
			this->_stack.push( *iter - '0' );
		else if ( ( *iter == '-' || *iter == '+' ) && std::isdigit( *( iter + 1 ) ) && *( iter + 2 ) == ' ' )
			this->_signedDigit( rpn, iter );
		else if ( this->_isOperator(*iter) && *( iter + 1 ) == ' ' )
			this->_ops( iter );
		else
			throw ( std::invalid_argument( "Error: Wrong RPN format." ) );

		rpn.erase( iter );
	}
	if ( this->_stack.size() != 1 )
		throw ( std::invalid_argument( "Error: Wrong RPN format." ) );
	std::cout << this->_stack.top() << std::endl;
}

void	RPN::_signedDigit( std::string &rpn, std::string::iterator &op )
{
	if ( *op == '-' )												// e.g . "-5"
		this->_stack.push( (*(op + 1) - 48) * -1 );
	else															// e.g . "+5"
		this->_stack.push( *(op + 1) - 48 );
	rpn.erase( op );
}

bool	RPN::_isOperator( const char op )
{
	return ( op == '+' || op == '-' || op == '*' || op == '/' );
}

void	RPN::_ops( std::string::iterator &op )
{
	if ( this->_stack.size() < 2 )
		throw ( std::invalid_argument( "Error: Wrong RPN format." ) );
	if ( *op == '+' )
		this->_stack.push( this->_add() );
	else if ( *op == '-' )
		this->_stack.push( this->_sub() );
	else if ( *op == '*' )
		this->_stack.push( this->_mul() );
	else if ( *op == '/' )
		this->_stack.push( this->_div() );
}

long	RPN::_add( void )
{
	long	a;
	long	b;

	b = this->_stack.top();
	this->_stack.pop();
	a = this->_stack.top();
	this->_stack.pop();

	return ( a + b );
}

long	RPN::_sub( void )
{
	long	a;
	long	b;

	b = this->_stack.top();
	this->_stack.pop();
	a = this->_stack.top();
	this->_stack.pop();
	
	return ( a - b );
}

long	RPN::_mul( void )
{
	long	a;
	long	b;

	b = this->_stack.top();
	this->_stack.pop();
	a = this->_stack.top();
	this->_stack.pop();

	return ( a * b );
}

long	RPN::_div( void )
{
	long	a;
	long	b;

	b = this->_stack.top();
	this->_stack.pop();
	a = this->_stack.top();
	this->_stack.pop();

	if (b == 0)
		throw ( std::invalid_argument( "Error: Division by zero is undefined." ) );

	return ( a / b );
}
