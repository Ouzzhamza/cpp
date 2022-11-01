/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:23:56 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/01 19:23:59 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotForm", 72, 45)
{
	target = "hamza";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) : Form ("RobotForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& obj) : Form("RobotForm", 72, 45)
{
	*this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator= (RobotomyRequestForm const& obj)
{
	this->target = obj.target;
	return (*this);
}

void RobotomyRequestForm::executeSpe(void) const
{
	std::random_device rd;
	bool choice = rd() % 2 != 0 ? 0 : 1;
	if (choice)
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The operation failed" << std::endl;
}
