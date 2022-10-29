/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:15:04 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/27 20:43:58 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Form.hpp"

Form::Form() : _name("form"), g_sign(1), g_execute(1)
{
	sign = false;
}

Form::~Form(){}

Form::Form(const Form& obj) : g_sign(obj.g_sign), g_execute(obj.g_execute)
{
	*this = obj;
}

Form& Form::operator= (const Form& obj)
{
	sign = obj.sign;
	return(*this);
}

const std::string& Form::getName(void) const 
{
	return(_name);
}


int Form::getGsign(void) const
{
	return (g_sign);
}


int Form::getGexecute(void) const
{
	return (g_execute);
}

bool Form::getSign(void) const
{
	return (sign);
}

Form::Form(std::string const name, const int _g_sign, const int _g_execute) : _name(name), g_sign(_g_sign), g_execute(_g_execute)
{
	sign = false;
	if (this->g_sign < MAX_GRADE)
		throw GradeTooHighException();
	else if (g_sign > MIN_GRADE)
		throw GradeTooLowException();
	else if (g_execute < MAX_GRADE)
		throw GradeTooHighException();
	else if (g_execute > MIN_GRADE)
		throw GradeTooLowException();
	std::cout << *this << std::endl;
}

void Form::beSigned(Bureaucrat& obj)
{
	if (this->g_sign > obj.getGrade()){
		sign = true;
		std::cout << *this << std::endl;
	}
	else
		throw GradeTooLowException();
}

const char* Form::GradeTooLowException::what() const throw()
{
	return("The Form grade is too low!");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return("The Form grade is too high!");
}

std::ostream& operator<< (std::ostream& output, const Form& obj)
{
	output << "The form " << obj.getName()
	<< (obj.getSign() ? " is signed." : " isn't signed. ")
   	<< "It's grade to sign is : " << obj.getGsign()
   	<< " and it's grade to execute is : " << obj.getGexecute();
	return (output);
}
