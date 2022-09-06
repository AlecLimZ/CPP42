/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:36:44 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/06 11:12:28 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <map>
# include <algorithm> // to use min_element & max_element

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
		Span(Span const & src);
		Span & operator=(Span const & rhs);
		Span(unsigned int n);

		void addNumber(long int i);
		long int shortestSpan();
		long int longestSpan();
		void fillSpan(int n);

		//setter & getter
		void	setInt(unsigned int i);
		void	setVector(vector <int> i);
		unsigned int	getInt(void) const;
		vector<int> getVector(void) const;

		//helper
		static std::pair<long, long> pairmap(long x);
		static std::pair<long, long> submap(std::pair<const long, long> & x, std::pair<const long, long> & y);
};

std::ostream & operator<<(std::ostream & o, Span const & rhs);

#endif
