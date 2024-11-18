/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:51:15 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/18 14:00:40 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

class Span {
	private:
		
	public:
		Span(void);
		Span(Span const &obj);
		~Span(void);
		Span	&operator=(Span const &obj);
};

#endif