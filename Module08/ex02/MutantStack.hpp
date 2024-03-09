/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:30:59 by ael-khel          #+#    #+#             */
/*   Updated: 2024/03/08 23:15:37 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>

template < typename T, typename C = std::deque<T> >
class	MutantStack : public std::stack< T, C > {

	public	:

		MutantStack( void ) { }
		MutantStack( const MutantStack &obj ) : std::stack<T, C>(obj) { }
		~MutantStack( ) { }

		MutantStack&	operator = ( const MutantStack &obj )
		{
			std::stack<T, C>::operator = (obj);
			return (*this);
		}
		
		typedef typename C::iterator iterator;

		// c is protected member object in std::stack referenced to the underlying container used to store the elements
		iterator	begin() { return (this->c.begin()); }
		iterator	end() { return (this->c.end()); }

};

#endif