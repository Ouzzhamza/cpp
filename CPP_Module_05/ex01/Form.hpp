/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:49:26 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/27 17:45:56 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include	"Bureaucrat.hpp"
#include	<iostream>

class Bureaucrat;
class Form {

	private:

		std::string const _name;
		bool sign;
		const int g_sign;
		const int g_execute;

	public:
		Form();
		Form(std::string const name, const int _g_sign,  const int _g_execute);
		~Form();
		Form(const Form& obj);
		Form& operator= (const Form& obj);


		const std::string& getName (void) const;
		int getGsign(void) const;
		int getGexecute(void) const;
		bool getSign(void) const;

		void beSigned(Bureaucrat& obj);

		class GradeTooHighException : public std::exception{
			public : 
				const char* what() const throw();
		};

		class GradeTooLowException : public  std::exception{
			public :
				const char* what() const throw();
		};

		class ExecuteToolowExeption : public std::exception{
			public :
				const char * what() const throw();
		};

		class ExecuteToohighExeption : public std::exception{
			public :
				const char * what() const throw();
		};
};

std::ostream& operator<< (std::ostream& ouput, const Form& obj);


#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */

#endif
