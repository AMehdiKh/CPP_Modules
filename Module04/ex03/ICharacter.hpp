/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:38:51 by ael-khel          #+#    #+#             */
/*   Updated: 2023/09/21 17:03:25 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria;
class	ICharacter {

	public	:

		virtual ~ICharacter() {}

		virtual const std::string&	getName() const = 0;
		virtual void 				equip(AMateria* m) = 0;
		virtual void 				unequip(int idx) = 0;
		virtual void 				use(int idx, ICharacter& target) = 0;

};

#endif