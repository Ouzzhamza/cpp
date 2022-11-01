/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:23:56 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/01 19:22:26 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyForm", 145, 137)
{
	target = "hamza";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : Form ("ShrubberyForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& obj) : Form ("ShrubberyForm", 145, 137)
{
	*this = obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (ShrubberyCreationForm const& obj)
{
	this->target = obj.target;
	return (*this);
}

void ShrubberyCreationForm::executeSpe(void) const
{
	std::ofstream outfile(target + "_shrubbery");
	if (outfile.is_open())
	{
	outfile     << "           ,@@@@@@@," << std::endl
				<< "   ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
				<< ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
				<< ",%&\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
		   		<< "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
				<< "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
		   		<< "`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
				<< "    |o|        | |         | |" << std::endl
				<< "    |.|        | |         | |" << std::endl
				<< " \\/ ._\\/\\/_/__/  ,\\_//__\\/.  \\_//__/_";

	outfile.close();
	}
	else
		std::cout << "Can't create an output file" << std::endl;
}
