/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:38:56 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/01 18:52:42 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <random>

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const& target);
		RobotomyRequestForm(RobotomyRequestForm const& obj);
		RobotomyRequestForm&	operator= (RobotomyRequestForm const& obj);
		void executeSpe(void) const;
};


#endif
