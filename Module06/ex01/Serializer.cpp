/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 01:15:23 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/01 02:16:29 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serializer::serialize( Data* ptr )
{
	return ( reinterpret_cast<uintptr_t>(ptr) );
}
Data*		Serializer::deserialize( uintptr_t raw )
{
	return ( reinterpret_cast<Data*>(raw) );
}