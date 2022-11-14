/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:54:23 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/14 16:05:10 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <iterator>
#include <vector>
#include <array>
#include <list>
#include <deque>


class Notexists : public std::exception {
	public :
		const char *what()const  throw(){
			return (" Number not foun");
		}
};

template <typename T>
void easyfind(T const& container, int integer)
{
	typename T::const_iterator Iter;
	Iter = std::find(container.begin(), container.end(), integer);
	if (Iter != container.end())
		std::cout << "Number exists" << std::endl;
	else
	{
		throw Notexists();
	}
}


#endif
