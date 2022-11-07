/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:01:58 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/07 23:44:19 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){}


Base *generate(void)
{
	int i;
	srand(time(NULL));
	i = rand()%3;
	switch(i)
	{
		case (0):
			return(new A);
		case (1):
			return (new B);
		case (2):
			return(new C);
	}
	return (NULL);
}

void identify(Base *p)
{

	if (A *ptr = dynamic_cast<A*>(p))
		std::cout << " A is the actual type of the object pointed to by p." << std::endl;
	else if (B *ptr = dynamic_cast<B*>(p))
		std::cout <<  " B is the actual type of the object pointed to by p." << std::endl;
	else if (C *ptr = dynamic_cast<C*>(p))
		std::cout <<  " C is the actual type of the object pointed to by p." << std::endl;	
	else
		std::cout << " I can't identifie the actual type of the object pointed to by p." << std::endl;	
}


void identify(Base& p)
{
	try
	{
		A &ptr = dynamic_cast<A&>(p);
		(void)ptr;
		std::cout << " A is the actual type of the object pointed to by p." << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cout << "Caught bad cast" << '\n';
	}
	
	try
	{
		B &ptr = dynamic_cast<B&>(p);
		(void)ptr;
		std::cout << " B is the actual type of the object pointed to by p." << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cout << "Caught bad cast" << '\n';
	}
	
	try
	{
		C &ptr = dynamic_cast<C&>(p);
		(void)ptr;
		std::cout << " C is the actual type of the object pointed to by p." << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cout << "Caught bad cast" << '\n';
	}
	
}
