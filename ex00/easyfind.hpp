/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:06:29 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/18 14:26:56 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iostream>
# include <list>

template< typename T >
void	easyfind(T array, int n) {	
	std::list<int>::const_iterator it = array.begin();
	std::list<int>::const_iterator	ite = array.end();

	std::list<int>::const_iterator	i;
	i = find(it, ite, n);
	if (i != ite)
		std::cout << "It's here! Number found: " << *i << "." << std::endl;
	else
		std::cerr << "Doesn't exist in the list!" << std::endl;
}

#endif