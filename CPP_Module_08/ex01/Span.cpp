/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:01:11 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/15 13:19:55 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int _N)
{
	N = _N;

}

Span::Span(const Span& obj)
{
	*this = obj;
}

Span::~Span(){}



Span& Span::operator=(const Span& obj)
{
	this->N = obj.getN();

	_vector = obj._vector;

	return (*this);
}

unsigned int Span::getN() const
{
	return(N);
}

void Span::addNumber(int i)
{
	try{
		if (_vector.size() < N)
		{
			_vector.push_back(i);
		}
		else
			throw OutRange();
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << i << std::endl;
	}
}

int  Span::shortestSpan()
{
	int shortest = INT_MAX;
	sort(_vector.begin(), _vector.end());
	for(std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
	{
		if ((*(it + 1) - *it) >= 0)
			shortest = (shortest > (*(it + 1) - *it)) ? (*(it + 1) - *it) : shortest;
	}
	sort(_vector.begin(), _vector.end());
	return (shortest);
}

int Span::longestSpan()
{
	int longest = 0;
	sort(_vector.begin(), _vector.end());
	std::vector<int>::iterator min = _vector.begin();
	std::vector<int>::iterator max = _vector.end() - 1;
	longest = *max - *min;
	return(longest);
}


