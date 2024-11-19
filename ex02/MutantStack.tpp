/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:48:07 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/19 14:13:12 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template< class T >
MutantStack<T>::MutantStack(void) {
}

template< class T >
MutantStack<T>::MutantStack(MutantStack<T> &obj) {
	for (iterator it = obj.begin();it < obj.end();it++) {
		this->push(*it);
	}
}

template< class T >
MutantStack<T>::~MutantStack(void) {
}

template< class T >
MutantStack<T>	&MutantStack<T>::operator=(MutantStack<T> const &obj) {
	MutantStack<T>	tmp = obj;

	if (this != &obj && obj.empty() == false) {
		for (iterator it = tmp.begin();it < tmp.end();it++) {
			this->push(*it);
		}
	}
	return (*this);
}

template< class T >
typename MutantStack<T>::iterator	MutantStack<T>::begin(void) {
	return (this->c.begin());
}

template< class T >
typename MutantStack<T>::iterator	MutantStack<T>::end(void) {
	return (this->c.end());
}