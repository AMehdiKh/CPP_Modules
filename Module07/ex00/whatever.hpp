/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:30:59 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/11 21:20:49 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template	<typename T>
void	swap(T& a, T& b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template	<typename T>
T		min(T a, T b)
{
	return (a < b ? a : b);
}

template	<typename T>
T		max(T a, T b)
{
	return (a > b ? a : b);
}

#endif