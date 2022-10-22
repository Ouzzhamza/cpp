/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:15:04 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/04 18:44:19 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Form.hpp"

Form::Form() : g_sign(1) g_execute(1)
{
	name = "form";
}

Form::~Form()
{
}

Form::Form(const Form& obj)
{
	*this = obj;
}

Form& Form::operator= (const Form& obj)
{
	_grade = obj.getGrade();
	return(*this);
}

const std::string& Form::getName(void) const 
{
	return(_name);
}


int Form::getGrade(void) const
{
	return (_grade);
}

void Form::incrementGrade(void)
{
	_grade--;
	if (_grade < MAX_GRADE)
		throw GradeTooLowException();
}


void Form::decrementGrade(void)
{
	_grade++;
	if (_grade > MIN_GRADE)
		throw GradeTooLowException();
}

Form::Form(std::string const name, int grade) : _name(name)
{
	_grade = grade;
	if (grade < MAX_GRADE)
		throw GradeTooHighException();
	else if (grade > MIN_GRADE)
		throw GradeTooLowException();
	else
		std::cout << "Setting the Form and it's grade" << std::endl;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return("the grade is to low");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return("the grade is to high");
}

std::ostream& operator<< (std::ostream& output, const Form& obj)
{
	output << obj.getName();
   	output << obj.getGrade();
	return (output);
}
