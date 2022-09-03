/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:36:44 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/03 11:58:35 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Span
{
	unsigned int _N;
	vector<int> _span;
	public:
		//conanical form
		Span(void);
		~Span(void);
		explicit Span(Span const & src);
		Span & operator=(Span const & rhs);
		Span(unsigned int n);

		void addNumber();
		long int shortestSpan();
		long int longestSpan();
};

#endif
