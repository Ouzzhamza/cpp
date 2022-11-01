/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:23:56 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/01 19:32:55 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialForm", 25, 5)
{
	target = "hamza";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) : Form ("PresidentialForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& obj) : Form ("PresidentialForm", 25, 5)
{
	*this = obj;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator= (PresidentialPardonForm const& obj)
{
	this->target = obj.target;
	return (*this);
}

void PresidentialPardonForm::executeSpe(void) const
{
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
