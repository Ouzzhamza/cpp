/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:51:43 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/11 14:07:00 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


/*void leak()
{
	system("leaks real_type");
}*/

int main()
{
	Base *unkown = generate();
	identify(*unkown);
//	identify(unkown);
	delete unkown;
//	atexit(leak);
}
