/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:16:43 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/06 21:38:50 by houazzan         ###   ########.fr       */
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
		Bureaucrat me("me", 1);
		Form boy("bot", 4, 2);
		boy.beSigned(me);
	}
	catch (std::exception& excp){
		std::cout << excp.what() << std::endl;
	}
}

int main()
{
	test_low();
	test_high();
	test_confirm_sign();
	
	return (0);
}
