/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:16:43 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/04 17:45:19 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void test_low()
{
	std::cout << GREEN << "TESTING WITH LOW GRADE" << RESET <<std::endl;

	try{
		Bureaucrat low("Man", 50);
		std::cout << "Name: " << low.getName() 
					<< " Grade: " << low.getGrade() << std::endl;
	}
	catch(std::exception& excp){
		std::cout << excp.what() << std::endl;
	}
}

void test_high()
{
	std::cout << GREEN << "TESTING WITH HIGH GRADE" << RESET <<std::endl;

	try{
		Bureaucrat high("Woman", 1);
		std::cout << "Name: " << high.getName()
					<< " Grade: " << high.getGrade() << std::endl;
	}
	catch(std::exception& excp){
		std::cout << excp.what() << std::endl;
	}
}

void test_increment()
{
	std::cout << GREEN << "TESTING INCREMENTATION GRADE" << RESET <<std::endl;

	try{
		Bureaucrat boy("boy", 5);
		while (1)
		{
			boy.incrementGrade();
			std::cout << "Name: " << boy.getName()
					<< " Grade: " << boy.getGrade() << std::endl;
		}
	}
	catch(std::exception& excp){
		std::cout << excp.what() << std::endl;
	}
}


void test_decrement()
{
	std::cout << GREEN << "TESTING DECREMENTATION GRADE" << RESET <<std::endl;

	try{
		Bureaucrat girl("girl", 145);
		while (1)
		{
			girl.decrementGrade();
			std::cout << "Name: " << girl.getName()
					<< " Grade: " << girl.getGrade() << std::endl;
		}
	}
	catch(std::exception& excp){
		std::cout << excp.what() << std::endl;
	}
}

int main()
{
	test_low();
	test_high();
	test_increment();
	test_decrement();
	return (0);
}
