/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:15:04 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/26 18:48:26 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name ("hamza")
{
	_grade = 1;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
	*this = obj;
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& obj)
{
	_grade = obj.getGrade();
	return(*this);
}

const std::string& Bureaucrat::getName(void) const 
{
	return(_name);
}


int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void Bureaucrat::incrementGrade(void)
{
	_grade--;
	if (_grade < MAX_GRADE)
		throw GradeTooLowException();
}


void Bureaucrat::decrementGrade(void)
{
	_grade++;
	if (_grade > MIN_GRADE)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	_grade = grade;
	if (grade < MAX_GRADE)
		throw GradeTooHighException();
	else if (grade > MIN_GRADE)
		throw GradeTooLowException();
	else
		std::cout << "Setting the Bureaucrat and it's grade" << std::endl;
}

const char* Bureaucrat::GradeTooLowException::what() const thro
()
{
	return("the grade is to low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return("the grade is to high");
}

std::ostream& operator<< (std::ostream& output, const Bureaucrat& obj)
{
	output << obj.getName();
   	output << obj.getGrade();
	return (output);
}
