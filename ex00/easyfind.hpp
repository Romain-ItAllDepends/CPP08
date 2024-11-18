/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:06:29 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/18 13:48:55 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <list>

template< typename T >
void	easyfind(T array, int n) {
	int	i = 0;
	
	std::list<int>::const_iterator	ite = array.end();
	for (std::list<int>::const_iterator it = array.begin();it != ite;it++) {
		if (*it == n) {
			std::cout << "It's here! Number found: " << *it << " at the index: " << i << "." << std::endl;
			return ;
		}
		i++;
	}
	std::cerr << "Doesn't exist in the list!" << std::endl;
}

#endif