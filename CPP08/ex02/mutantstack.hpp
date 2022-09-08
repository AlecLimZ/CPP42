/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:57:48 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/08 18:24:31 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>

# include <deque>
# include <vector>
# include <list>

using std::cout;
using std::endl;
using std::deque;
using std::vector;
using std::list;

typedef size_t size_type;

template <typename T, typename Container = std::deque<T> >
class MutantStack
{
	typedef T value_type;
	typedef T& reference;
	typedef const T& const_reference;
	protected:
		Container C;
	public:
		// Canonical Form
		explicit MutantStack(Container const & cont = Container()); // until C++11
		MutantStack(MutantStack const & src);
		~MutantStack(void);
		MutantStack & operator=(MutantStack const & rhs);

		//access to the top element
		reference top();
		const_reference top() const;

		// push & pop
		void push(value_type const & value);
		void pop();

		// check if empty
		bool empty() const;

		//size
		size_type size(void) const; // size of the stack size
};

#endif
