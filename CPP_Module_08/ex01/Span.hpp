/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:54:48 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/14 18:46:10 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span {
	
	private :

		unsigned int N;

		std::vector<int> _vector;

	public : 
		Span(unsigned int _N); // constructor

		Span(const & obj); // copy constructor

		~Span(); //destructor

		Span& operator=(const &obj); // copy assignement operator

		addNumber();
		
		shortestSpan();
		
		longestSpan();
};


#endif
