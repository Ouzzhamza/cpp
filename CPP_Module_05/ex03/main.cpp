/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:16:43 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/06 21:46:27 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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


// void leak()
// {
// 	system("leaks Form_making");
// }

int main()
{
	Intern someRandomIntern;
	Form* form;

	form = someRandomIntern.makeForm("presidential pardon", "Bender");
	delete form;
	std::cout << std::endl;
	form = someRandomIntern.makeForm("robotomy request", "Bender");
	delete form;
	std::cout << std::endl;
	form = someRandomIntern.makeForm("shrubbery creation", "Bender");
	delete form;
	std::cout << std::endl;
	form = someRandomIntern.makeForm("earth destruction request", "Bender");
	delete form;
	//atexit(leak);
	return (0);
}
