/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:51:10 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/18 16:46:25 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

static void	display(int i) {
	std::cout << i << std::endl;
}

int	 main(void) {
	Span sp = Span(2);
	Span v = Span(10000);
	
	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch (Span::AlreadyFilledVectorException e) {
		std::cerr << e.what() << std::endl;
	}
	catch (Span::TooFewNumbersException e) {
		std::cerr << e.what() << std::endl;
	}
	catch (std::exception e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "----------------------------" << std::endl << std::endl;
	
	std::for_each(sp.getStart(), sp.getEnd(), display);

	std::cout << std::endl << std::endl << "----------------------------" << std::endl << std::endl;

	try {
		std::cout << sp.shortestSpan() << " shortest." << std::endl; // == 2
		std::cout << sp.longestSpan() << " longest." << std::endl; // == 14
	}
	catch (Span::AlreadyFilledVectorException e) {
		std::cerr << e.what() << std::endl;
	}
	catch (Span::TooFewNumbersException e) {
		std::cerr << e.what() << std::endl;
	}
	catch (std::exception e) {
		std::cerr << e.what() << std::endl;
	}
	
	// try {
	// 	srand(time(NULL));
	// 	for (unsigned int i = 0;i < 10000;i++) {
	// 		v.addNumber(rand() % 20000);
	// 	}
	// }
	// catch (Span::AlreadyFilledVectorException e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	// catch (Span::TooFewNumbersException e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	// catch (std::exception e) {
	// 	std::cerr << e.what() << std::endl;
	// }

	// std::cout << "----------------------------" << std::endl << std::endl;
	
	// std::for_each(v.getStart(), v.getEnd(), display);

	// std::cout << std::endl << "----------------------------" << std::endl;

	// try {
	// 	std::cout << std::endl << v.shortestSpan() << " short." << std::endl;
	// 	std::cout << v.longestSpan() << " longest." << std::endl;
	// }
	// catch (Span::AlreadyFilledVectorException e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	// catch (Span::TooFewNumbersException e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	// catch (std::exception e) {
	// 	std::cerr << e.what() << std::endl;
	// }

	return (0);
}