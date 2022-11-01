/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:04:11 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/01 20:19:51 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"


class Intern
{
	public :
		
		Intern();
		~Intern();
		Intern(Intern const& obj);
		Intern& operator= (Intern const& obj);
		
		Form* makeForm(std::string const& form, std::string const& target);
		Form* makeShrubberyForm(std::string const& form, std::string const& target);
		Form* makeRobotForm(std::string const& form, std::string const& target);
		Form* makePresidentForm(std::string const& form, std::string const& target);





#endif
