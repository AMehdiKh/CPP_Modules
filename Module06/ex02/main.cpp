/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:31:36 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/01 04:09:33 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

#define SIZE 5

class	Base { public: virtual ~Base() {} };
class	A : public	Base {};
class	B : public	Base {};
class	C : public	Base {};

Base*	generate(void)
{
	if (std::rand() % 3 == 0)
		return (new A);
	if (std::rand() % 2 == 0)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "ptr: A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "ptr: B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "ptr: C\n";
}

void	identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "ref: A\n";
	} catch (std::exception &e) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "ref: B\n";
	} catch (std::exception &e) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "ref: C\n";
	} catch (std::exception &e) {}
}

int	main( void )
{
	Base *base_arr[SIZE];

	std::srand(std::time(0));
	for (int i = 0; i < SIZE; ++i)
		base_arr[i] = generate();
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << "Object number : " << i + 1 << std::endl;
		identify(base_arr[i]);
		identify(*base_arr[i]);
	}
	for (int i = 0; i < SIZE; ++i)
		delete base_arr[i];
	return (0);
}