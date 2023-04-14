/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzhamza <ouzhamza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 01:26:20 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/04/14 02:15:02 by ouzhamza         ###   ########.fr       */
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

	first = _stack.top();
	if (!_stack.empty())
		_stack.pop();
	second = _stack.top();
	if (!_stack.empty())
		_stack.pop();
	result = first * second;
	_stack.push(result);
}


void	Rpn::addition() {

	int first;
	int second;
	int result;

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

	first = _stack.top();
	if (!_stack.empty())
		_stack.pop();
	second = _stack.top();
	if (!_stack.empty())
		_stack.pop();
	result = first / second;
	_stack.push(result);
	
}