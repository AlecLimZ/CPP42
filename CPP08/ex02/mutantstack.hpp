/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:57:48 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/09 08:29:53 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>

# include <deque>
# include <vector>
# include <list>
# include <stack>

# include <iterator>

using std::cout;
using std::endl;
using std::deque;
using std::vector;
using std::list;
using std::stack;

template <typename T, typename Container = deque<T> >
class MutantStack: public std::stack<T>
{
	public:
		//Conanical Form
		MutantStack(void);
		~MutantStack(void);
		MutantStack(MutantStack const & src);
		MutantStack & operator=(MutantStack const & rhs);

		typedef typename stack<T>::container_type::iterator iterator;
		//typename stack<T>::container_type::iterator begin(void) <--- it dont work
		iterator begin(void);
};

#endif
