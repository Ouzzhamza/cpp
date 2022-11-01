/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:38:56 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/01 19:15:58 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm(void);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const& target);
		PresidentialPardonForm(PresidentialPardonForm const& obj);
		PresidentialPardonForm&	operator= (PresidentialPardonForm const& obj);
		void executeSpe(void) const;
};


#endif
