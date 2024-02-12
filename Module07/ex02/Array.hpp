/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:30:59 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/11 21:26:24 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstddef>
# include <stdexcept>

template	< typename T >
class	Array {

	private	:

		T				*_arr;
		unsigned		_size;

	public	:

		Array( void );
		Array( unsigned int );
		Array( const Array<T> & );
		~Array( );

		unsigned int	size( void )	const;

		Array<T>&	operator = ( const Array<T> & );
		const T&	operator [] ( unsigned )	const;
		T&			operator [] ( unsigned );

};

template	< typename T >
Array< T >::Array( void )	try : _arr( new T() ), _size( 0 ) { }
catch ( const std::exception &e )
{
	std::cout << e.what() << std::endl;
}

template	< typename T >
Array< T >::Array( unsigned size )	try : _arr( new T[size] ), _size( size ) { }
catch ( const std::exception &e )
{
	std::cout << e.what() << std::endl;
}

template	< typename T >
Array< T >::Array( const Array<T> &arr )	try : _arr( new T[arr.size()] ), _size( arr.size() )
{
	for (unsigned i(0); i < this->size(); ++i)
		this->_arr[i] = arr[i];
}
catch ( const std::exception &e )
{
	std::cout << e.what() << std::endl;
}

template	< typename T >
Array< T >::~Array( )
{
	delete [] this->_arr;
}

template	< typename T >
unsigned int	Array< T >::size( void )	const
{
	return (this->_size);
}

template	< typename T >
Array<T>&	Array< T >::operator = ( const Array &arr )
{
	if (this != &arr)
	{
		try
		{
			delete [] this->_arr;
			this->_arr( new T[arr.size()] );
		}
		catch ( const std::exception &e )
		{
			std::cout << e.what() << std::endl;
		}
		this->_size(arr.size());
		for (unsigned i(0); i < this->size(); ++i)
			this->_arr[i] = arr[i];
	}
}

template	< typename T >
T&		Array< T >::operator [] ( unsigned index )
{
	if (index >= this->size())
		throw ( std::out_of_range("Index is out of range") );
	return (this->_arr[index]);
}

template	< typename T >
const T&		Array< T >::operator [] ( unsigned index )	const
{
	if (index >= this->size())
		throw ( std::out_of_range("Index is out of range") );
	return (this->_arr[index]);
}

#endif