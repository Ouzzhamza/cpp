/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:03:20 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/14 10:26:25 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>

template<class T>
class Array{
	public :
		Array(void) // default constructor
		{
			_size = 0;
			array = new T[_size];
		}

		Array(unsigned int n) // type constructor
		{
			_size = n;
			array = new T[_size];
		}

		Array(const Array& obj) // coppy constructor
		{
			array = new T[1];
			*this = obj;
		}

		~Array() //destructor
		{
			delete[] array;
		}
		
		T& operator[] (unsigned int index) // operator for read and write
		{
			if (index < 0 || _size < index)
				throw std::invalid_argument("invalid index");
			else
				return(array[index]);
		}

		T& operator[] (unsigned int index) const
		{
			if (index < 0 || _size < index)
				throw std::invalid_argument("invalid index");
			else
				return(array[index]);
		}

		const Array & operator=(const Array& obj)// copy assignement operator
		{
			delete [] array;
			_size = obj._size;
			array = new T [_size];
			for (unsigned int i = 0; i < _size; i++)
			{
				array[i] = obj.array[i];
			}
			return *this;
		}
		unsigned int size()
		{
			return (_size);
		}
	private :
		T *array;
		unsigned int _size;
};


#endif
