/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:16:43 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/01 19:32:50 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void Sh_unvalid_signe(void)
{
	std::cout << RED <<  " \t Test for unvalid sign" << RESET <<  std::endl;

	Bureaucrat desk("Lincoln", 146);
	ShrubberyCreationForm form;
	desk.signForm(form);
}


void Sh_unvalid_execute(void)
{
	std::cout << RED <<  " \t Test for unvalid execute" << RESET <<  std::endl;
	Bureaucrat desk("Roosevelt", 142);
	ShrubberyCreationForm form;
	desk.signForm(form);
	desk.executeForm(form);
}


void Robot_test(void)
{
	std::cout << RED <<  " \t Test for Robot" << RESET <<  std::endl;
	RobotomyRequestForm form;
	Bureaucrat desk("Clinton", 44);
	desk.signForm(form);
	form.execute(desk);
}

void Pardon_test()
{
	std::cout << RED <<  " \t Test for Pardon" << RESET <<  std::endl;
	PresidentialPardonForm form("Phil");
	Bureaucrat desk1("Obama", 23);
	Bureaucrat desk2("Trump", 1);

	std::cout << form << std::endl;

	desk1.signForm(form);
	desk2.executeForm(form);

	std::cout << std::endl;
}

int main()
{
	Sh_unvalid_signe();
	Sh_unvalid_execute();
	Robot_test();
	Pardon_test();	
	return (0);
}
