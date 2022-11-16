/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:29:22 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/16 11:36:40 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
# include <iterator>

template <class T>
class MutantStack : public std::stack<T> {
	public :

		MutantStack();

		~MutantStack();
		
		MutantStack(MutantStack<T> const& other);

		MutantStack<T> &operator= (MutantStack<T> const& other);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin();

		iterator end();


};

#endif
