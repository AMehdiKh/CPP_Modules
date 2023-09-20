/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 00:52:19 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/16 15:23:08 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main ( void )
{
	const Animal	*animal = new Animal();
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();
	animal->makeSound();

	delete animal;
	delete dog;
	delete cat;
	
	std::cout << "\n#######################################################################\n\n";

	const WrongAnimal	*wrong_animal = new WrongAnimal();
	const WrongAnimal	*wrong_cat = new WrongCat();

	std::cout << wrong_cat->getType() << std::endl;

	wrong_cat->makeSound();
	wrong_animal->makeSound();

	delete wrong_animal;
	delete wrong_cat;

	return (0);
}