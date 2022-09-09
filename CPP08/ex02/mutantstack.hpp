/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:57:48 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/09 09:58:48 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>

# include <deque>
# include <vector>
# include <list>
# include <stack> // stack can only take deque, vector & list

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

		// access to stack's container's iterator & reverse
		typedef typename stack<T>::container_type::iterator iterator;
		typedef typename stack<T>::container_type::reverse_iterator reverse_iterator;
		//typename stack<T>::container_type::iterator begin(void) <--- it dont work as compile wont allow it because this class is using template
		//https://stackoverflow.com/questions/642229/why-do-i-need-to-use-typedef-typename-in-g-but-not-vs
		iterator begin(void);
		iterator end(void);
		reverse_iterator rbegin(void);
		reverse_iterator rend(void);

		// access to stack's container's const iterator & reverse
		typedef typename stack<T>::container_type::const_iterator const_iterator;
		typedef typename stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		const_iterator begin(void) const;
		const_iterator end(void) const;
		const_reverse_iterator rbegin(void) const;
		const_reverse_iterator rend(void) const;
};

#endif
