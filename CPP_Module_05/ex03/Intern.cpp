/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:29:06 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/02 12:29:10 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:32:51 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/02 12:28:05 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const& obj)
{
	*this = obj;
}

Intern& Intern::operator= (Intern const& obj)
{
	(void) obj;
	return (*this);
}

Form *Intern::makeForm(std::string const& form, std::string const& target)
{
	std::string type = "shrubbery creation robotomy request presidential pardon";

	size_t i = type.find(form);
	
	if (type[form.length() + i] != ' ' && type[form.length() + i] != '\0')
		i = -1;
	switch(i)
	{
		case 0 :
			return (Intern::makeShrubberyForm(target));
			break;
		case 19 :
			return (Intern::makeRobotForm(target));
			break;
		case 36 :
			return (Intern::makePresidentForm(target));
			break;
		default :
			std::cout <<  RED << "\tSorry can't provide this type of form" << RESET << std::endl;
	}
	return(NULL);
}

Form*  Intern::makeShrubberyForm(std::string const& target)
{
	std::cout << GREEN <<"\tIntern creates Shrubbery Form" << RESET << std::endl;
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotForm(std::string const& target)
{
	std::cout << GREEN << "\tIntern creates Robotomy Request Form" << RESET << std::endl;
	return new RobotomyRequestForm(target);
}

Form *Intern::makePresidentForm(std::string const& target)
{
	std::cout << GREEN << "\tIntern creates Presidential Pardon Form" <<  RESET << std::endl;
	return new PresidentialPardonForm(target);
}
