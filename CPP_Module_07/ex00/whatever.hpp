/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:43:12 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/11 14:07:13 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &x, T &y)
{
	T z;
	z = x;
	x = y;
	y = z;
}

template <typename T>
T max(T x, T y)
{
	return (x > y) ? x : y;
}

template <typename T>
T min(T x, T y)
{
	return (x < y) ? x : y;
}
#endif
