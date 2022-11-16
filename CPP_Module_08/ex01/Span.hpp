/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:54:48 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/16 11:36:02 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
	
	private :

		unsigned int N;

		std::vector<int> _vector;

	public :

		Span(); // default constructor
	
		Span(unsigned int _N); // constructor

		Span(const Span& obj); // copy constructor

		~Span(); //destructor

		Span& operator=(const Span& obj); // copy assignement operator

		unsigned int getN() const;

		void addNumber(int i);
		
		int shortestSpan();
		
		int longestSpan();

		class OutRange : public std::exception {
			public :
				const char *what() const throw()
				{
					return ("Sorry class is full can't add the number: ");
				}
		};
};


#endif
