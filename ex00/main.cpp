/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:06:34 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/18 14:27:26 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void) {
	std::list<int>	lst;

	lst.push_back(-42);
	lst.push_back(42);
	lst.push_back(45);
	lst.push_back(72);
	lst.push_back(9);
	lst.push_back(42);
	lst.push_back(4);
	lst.push_back(0);
	lst.push_back(1);
	
	easyfind(lst, 0);
	return (0);
}