/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:38:56 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/01 12:11:14 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const& target);
		ShrubberyCreationForm(ShrubberyCreationForm const& obj);
		ShrubberyCreationForm&	operator= (ShrubberyCreationForm const& obj);
		void executeSpe(void) const;
};


#endif
