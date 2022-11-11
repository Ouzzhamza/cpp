/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:43:12 by houazzan          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/11/11 14:07:13 by houazzan         ###   ########.fr       */
=======
/*   Updated: 2022/11/10 23:55:46 by houazzan         ###   ########.fr       */
>>>>>>> bcb97022ebbb1df9198be5fce70dbd090e8adeb1
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
<<<<<<< HEAD
void swap(T &x, T &y)
=======
T swap(T x, T y)
>>>>>>> bcb97022ebbb1df9198be5fce70dbd090e8adeb1
{
	T z;
	z = x;
	x = y;
	y = z;
}

<<<<<<< HEAD
template <typename T>
=======
>>>>>>> bcb97022ebbb1df9198be5fce70dbd090e8adeb1
T max(T x, T y)
{
	return (x > y) ? x : y;
}

<<<<<<< HEAD
template <typename T>
T min(T x, T y)
{
	return (x < y) ? x : y;
=======
T min(T x, T y)
{
	return (c < y) ? x : y;
>>>>>>> bcb97022ebbb1df9198be5fce70dbd090e8adeb1
}
#endif
