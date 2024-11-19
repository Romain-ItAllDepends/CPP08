/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:47:42 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/19 14:39:21 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <cstdlib>
#include <time.h>
#include <list>

static void	display(int i) {
	std::cout << "The number: " << i << "." << std::endl;
}

int main(void) {
	MutantStack<int> mstack;
	MutantStack<int> bigStack;
	
	srand(time(NULL));
	
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << std::endl << "start/end" << std::endl << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << *it << ", " << *(ite - 1) << std::endl;

	std::cout << "print all" << std::endl;

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "stack" << std::endl;

	std::stack<int> s(mstack);

	while (s.empty() == false) {
		std::cout << s.top() << std::endl;
		s.pop();
	}
	std::cout << "--" << std::endl;

	MutantStack<int> ssss = mstack;

	while (ssss.empty() == false) {
		std::cout << ssss.top() << std::endl;
		ssss.pop();
	}

	std::cout << "copy" << std::endl;

	MutantStack<int> ss = mstack;

	std::for_each(ss.begin(), ss.end(), display);

	std::cout << "--" << std::endl;

	MutantStack<int> sss(mstack);

	std::for_each(sss.begin(), sss.end(), display);


	std::cout << std::endl << "bigStack" << std::endl;

	for (int i = 0;i < 20;i++) {
		bigStack.push(rand() % 1000);
	}
	MutantStack<int>::iterator itt = bigStack.begin();
	MutantStack<int>::iterator itte = bigStack.end();
	for (;itt < itte;itt++) {
		std::cout << "The number: " << *itt << "." << std::endl;
	}

	std::cout << std::endl << "list" << std::endl;

	std::list<int> l;
	
	l.push_back(5);
	l.push_back(17);
	std::cout << l.back() << std::endl;
	l.pop_back();
	std::cout << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);

	std::cout << std::endl << "start/end" << std::endl << std::endl;

	std::list<int>::iterator itls = l.begin();
	std::list<int>::iterator itels = l.end();
	itels--;
	std::cout << *itls << ", " << *itels << std::endl;

	std::cout << "print all" << std::endl;

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl;

	std::for_each(l.begin(), l.end(), display);

	return 0;
}