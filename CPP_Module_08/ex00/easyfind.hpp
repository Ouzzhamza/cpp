/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:54:23 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/13 19:49:19 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>


class Notexists : public std::exception {
	public :
		const char *what()  throw(){
			return (" Number not foun");
		}
};

template <typename T>
void easyfind(T const &container, int integer)
{
	typename T::iterator Iter;
	Iter i = std::find(iter.begin(), iter.end(), integer);
	if (i != iter.end())
		std::cout << "Number exists at index " << i << std::endl;
	else
		throw Notexistsi();
}


#endif
