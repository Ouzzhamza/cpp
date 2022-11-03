/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:05:34 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/03 12:42:36 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostrem>

class Base {
	pribate :

		std::string str_to_convert;
		static std::string type;

	public :

		base();
		~base();
		Base(Base const& obj);
		Base& operator= (Base const& obj);
		static detect_type(static std::string type, std::string str_to_convert);
}



#endif
