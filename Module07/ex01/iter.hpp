/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:30:59 by ael-khel          #+#    #+#             */
/*   Updated: 2024/02/12 00:34:18 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template	<typename T>
void	iter(T *arr, int len, void (*func)(const T&))
{
	for (int i = 0; i < len; ++i)
		func(arr[i]);
}

template	<typename T>
void	print(const T& elem)
{
	std::cout << elem << std::endl;
}

#endif