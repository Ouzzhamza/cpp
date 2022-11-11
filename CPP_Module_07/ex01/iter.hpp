/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:20:25 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/11 17:43:07 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template <typename T>
void iter(T *array, unsigned int length, void (func)(T &x))
{
	for (unsigned int i = 0; i < length; i++)
	{
		func(array[i]);
	}
}

template <typename T>
void replace(T &i)
{
	i = 0;
}


#endif
