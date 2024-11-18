/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:51:12 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/18 16:44:48 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void):_N(0) {
}

Span::Span(unsigned int N):_N(N) {
}

Span::Span(Span const &obj) {
	v.assign(obj.v.begin(), obj.v.end());
	_N = obj._N;
}

Span::~Span(void) {
}

Span	&Span::operator=(Span const &obj) {
	if (this != &obj) {
		v.assign(obj.v.begin(), obj.v.end());
		_N = obj._N;
	}
	return (*this);
}

std::vector<int>::const_iterator	Span::getStart(void) const {
	return (v.begin());
}

std::vector<int>::const_iterator	Span::getEnd(void) const {
	return (v.end());
}

const char* Span::AlreadyFilledVectorException::what() const throw() {
	return ("Error: Already filled vector.");
}

const char* Span::TooFewNumbersException::what() const throw() {
	return ("Error: Too few numbers in the vector.");
}

void	Span::addNumber(int const N) {
	if (v.size() < _N)
		v.push_back(N);
	else
		throw AlreadyFilledVectorException();
	// Exception a verif
}

int	Span::shortestSpan(void) {
	if (_N < 2 || v.size() < 2)
		throw TooFewNumbersException();
	else {
		std::vector<int>	tmp = v;
		int					tmpComp;

		std::sort(tmp.begin(), tmp.end());
		tmpComp = std::abs(*(tmp.begin() + 1) - *tmp.begin());
		for (std::vector<int>::const_iterator	it = tmp.begin() + 1;it != tmp.end() - 1;it++) {
			if (tmpComp > std::abs(*(it + 1) - *it))
				tmpComp = std::abs(*(it + 1) - *it);
		}
		return (tmpComp);
	}
	return (0);
}

int	Span::longestSpan(void) {
	if (_N < 2)
		throw TooFewNumbersException();
	else {
		std::vector<int>	tmp = v;

		std::sort(tmp.begin(), tmp.end());
		return (std::abs(*(tmp.end() - 1) - std::abs(*tmp.begin())));
	}
}

// sort