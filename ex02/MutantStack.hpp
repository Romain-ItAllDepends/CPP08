/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:47:45 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/19 14:13:17 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>
# include <iostream>
# include <algorithm>

template< class T >
class MutantStack: public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator	iterator;

		MutantStack(void);
		MutantStack(MutantStack<T> &obj);
		~MutantStack(void);
		MutantStack<T>	&operator=(MutantStack<T> const &obj);

		iterator	begin(void);
		iterator	end(void);
};

# include "MutantStack.tpp"

#endif