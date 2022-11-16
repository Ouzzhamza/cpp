/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:53:51 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/16 11:36:16 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define VAL 10000
#include "Span.hpp"

int main()
{
/*	srand(time(NULL));
	Span sp = Span(VAL);
	for (int i = 0; i < VAL; i++)
		sp.addNumber(rand());*/
	Span sp = Span(5);
	sp.addNumber(-6);
	sp.addNumber(-3);
	sp.addNumber(-17);
	sp.addNumber(9);
	sp.addNumber(-11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
