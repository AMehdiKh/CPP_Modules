/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:40:04 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/22 03:01:30 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main( void )
{
	std::cout << "TEST 1:\n";
	
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "TEST 2:\n";

	std::stack<int> s(mstack);

	while (s.size())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}

	std::cout << "TEST 3:\n";
	
	MutantStack<int> istack(mstack);
	
	while (istack.size())
	{
		std::cout << istack.top() << std::endl;
		istack.pop();
	}
	
	std::cout << "TEST 4:\n";

	istack.push(1);
	istack.push(2);
	istack.push(3);
	istack.push(4);
	istack.push(5);
	
	it = istack.begin();
	ite = istack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	return (0);
}
