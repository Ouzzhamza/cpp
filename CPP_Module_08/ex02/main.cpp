/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:19:49 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/16 15:31:45 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	/*std::cout << "*** test_for_string with changin container type ***" << std::endl;

	typedef MutantStack<std::string, std::vector<std::string> >::iterator iter;

	MutantStack<std::string, std::vector<std::string> > mstack;

	MutantStack<std::string, std::vector<std::string> > mstack1;

	for (int i = 0; i < 10; i++) {
		std::ostringstream ss;
		ss << i;
		mstack.push(ss.str());
	}

	mstack1 = mstack;
	std::cout << "Top: " << mstack1.top() << std::endl;
	std::cout << "Size: " << mstack1.size() << std::endl;

	for (iter it = mstack1.begin(); it != mstack1.end(); it++) {
		std::cout << *it << std::endl;
	}

	// Testing deepness
	std::stack<std::string, std::vector<std::string> > s(mstack);


	for (iter it = s.begin(); it != s.end(); it++) {
		std::cout << *it << std::endl;
	}*/
	std::cout << std::endl;
	return 0;
}
