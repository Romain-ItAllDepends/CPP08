/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:51:15 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/18 16:40:26 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <time.h>
# include <vector>
# include <cstdlib>
# include <iostream>
# include <exception>
# include <algorithm>

class Span {
	private:
		std::vector<int>	v;
		unsigned int		_N;
	public:
		Span(void);
		Span(Span const &obj);
		~Span(void);
		Span	&operator=(Span const &obj);

		Span(unsigned int N);

		void	addNumber(int const N);
		int	shortestSpan(void);
		int	longestSpan(void);

		std::vector<int>::const_iterator	getStart(void) const;
		std::vector<int>::const_iterator	getEnd(void) const;
		
		class AlreadyFilledVectorException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class TooFewNumbersException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

#endif