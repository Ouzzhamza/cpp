/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzzhamza <ouzzhamza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 01:26:20 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/10/27 09:59:28 by ouzzhamza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Rpn::Rpn() {
	
}

Rpn::~Rpn() {
	
}  

void    Rpn::calculate(std::string str)
{
	size_t i = 0;

	int number;
	
	while(str[i])
	{
		if (isdigit(str[i])) {

			number = str[i] - '0';
			_stack.push(number);
		}
		else if (str[i] == '*' )
			multiplication();
		else if (str[i] == '+' )
			addition();
		else if (str[i] == '-' )
			subtraction();
		else if (str[i] == '/' )
			division();
		else if (str[i] != ' ')
			throw std::invalid_argument("Error");
		i++;	
	}
	if (_stack.size() != 1)
		throw std::invalid_argument("Error");
	std::cout << _stack.top() << std::endl;
}

void	Rpn::multiplication() {
	
	int first;
	int second;
	int result;

	if (_stack.size() < 2)
	{
		first = _stack.top();
		std::cout << first << std::endl;
		throw std::invalid_argument("Error");
	}

	if (!_stack.empty()) {
		first = _stack.top();
		_stack.pop();
	}
	if (!_stack.empty()) {
	second = _stack.top();
		_stack.pop();
	}
	result = first * second;
	_stack.push(result);
}


void	Rpn::addition() {

	int first;
	int second;
	int result;
	
	if (_stack.size() < 2)
		throw std::invalid_argument("Error");
		
	first = _stack.top();
	if (!_stack.empty())
		_stack.pop();
	second = _stack.top();
	if (!_stack.empty())
		_stack.pop();
	result = first + second;
	_stack.push(result);
}


void	Rpn::subtraction() {

	int first;
	int second;
	int result;

	if (_stack.size() < 2)
		throw std::invalid_argument("Error");
		
	first = _stack.top();
	if (!_stack.empty())
		_stack.pop();
	second = _stack.top();
	if (!_stack.empty())
		_stack.pop();
	result = second - first;
	_stack.push(result);	

}


void	Rpn::division() {

	int first;
	int second;
	int result;

	if (_stack.size() < 2)
		throw std::invalid_argument("Error");
		
	first = _stack.top();
	if (!_stack.empty())
		_stack.pop();
	second = _stack.top();
	if (!_stack.empty())
		_stack.pop();
	result = second / first;
	_stack.push(result);
}