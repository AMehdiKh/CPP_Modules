/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehdikh <amehdikh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 05:41:45 by amehdikh          #+#    #+#             */
/*   Updated: 2023/08/21 05:46:18 by amehdikh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void )
{
	Harl	object;

	object.complain("DEBUG");
	object.complain("INFO");
	object.complain("WARNING");
	object.complain("ERROR");	

	return (0);
}
