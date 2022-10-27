/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:16:43 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/27 18:39:58 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void test_low()
{
	std::cout << GREEN << "TESTING WITH LOW GRADE" << RESET <<std::endl;

	try{
		Form form("Man", 51, 10);
	}
	catch(std::exception& excp){
		std::cout << excp.what() << std::endl;
	}
}

void test_high()
{
	std::cout << GREEN << "TESTING WITH HIGH GRADE" << RESET <<std::endl;

	try{
		Form form ("Woman", 1, 20);
	}
	catch(std::exception& excp){
		std::cout << excp.what() << std::endl;
	}
}

void test_confirm_sign()
{
	std::cout << GREEN << "TESTING INCREMENTATION GRADE" << RESET <<std::endl;
	try {
		Bureaucrat me;
		Form boy("bot", 4, 2);
		boy.beSigned(me);
	}
	catch (std::exception& excp){
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
//	test_low();
//	test_high();
	test_confirm_sign();
	
	return (0);
}
