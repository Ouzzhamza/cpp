/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:29:22 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/16 17:47:36 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
# include <iterator>
#include <sstream>
#include <vector>

template <class T,  class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public :

		MutantStack() {}

		~MutantStack() {}
		
		MutantStack(MutantStack<T, Container> const& other)
		{
			this = other;
		}

		MutantStack<T, Container> &operator= (MutantStack<T, Container> const& other)
		{
			this->c = other.c;

			return *this;
		}

		typedef typename Container::iterator iterator;

		iterator begin()
		{
			return MutantStack<T, Container>::c.begin();
		}

		iterator end()
		{
			return MutantStack<T, Container>::c.end();
		}


};

#endif
