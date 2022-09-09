/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:36:44 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/09 13:43:40 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <map>
# include <algorithm> // to use min_element & max_element
# include <iterator>

# define DEF    "\033[0m"
# define BLK	"\033[30m"
# define RED	"\033[31m"
# define GRN	"\033[32m"
# define YLW	"\033[33m"
# define BLUE	"\033[34m"
# define MAG	"\033[35m"
# define CYAN	"\033[36m"
# define WHITE	"\033[37m"

# define BBLK	"\033[1m\033[30m"
# define BRED	"\033[1m\033[31m"
# define BGRN	"\033[1m\033[32m"
# define BYLW	"\033[1m\033[33m"
# define BBLUE	"\033[1m\033[34m"
# define BMAG	"\033[1m\033[35m"
# define BCYAN	"\033[1m\033[36m"
# define BWHITE	"\033[1m\033[37m"

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

		// using range iterator
		void fillSpan(vector<int>::iterator st, vector<int>::iterator fa);

		//setter & getter
		void	setInt(unsigned int i);
		void	setVector(vector <int> i);
		unsigned int	getInt(void) const;
		vector<int> getVector(void) const;
		vector<int>::iterator getBegin(void);
		vector<int>::iterator getEnd(void);

		//helper
		static std::pair<long, long> pairmap(long x);
		static std::pair<long, long> submap(std::pair<const long, long> & x, std::pair<const long, long> & y);

		//generate random
		void fillRandofSize(long i);
};

std::ostream & operator<<(std::ostream & o, Span const & rhs);

#endif
