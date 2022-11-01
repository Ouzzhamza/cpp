/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:49:26 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/01 17:02:36 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#define MAX_GRADE 1
#define MIN_GRADE 150

#include	<iostream>
#include	<exception>
#include	"Form.hpp"

class Form;

class Bureaucrat {

	private:

		std::string const _name;
		int _grade;

	public:

		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator= (const Bureaucrat& obj);


		std::string const& getName (void) const;
		int getGrade(void) const;


		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(Form& form);

		class GradeTooHighException : public std::exception{
			public : 
				const char* what() const throw();
		};

		class GradeTooLowException : public  std::exception{
			public :
				const char* what() const throw();
		};
};

std::ostream& operator<< (std::ostream& ouput, const Bureaucrat& obj);


#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */

#endif
