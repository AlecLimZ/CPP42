/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:06:44 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/22 18:02:11 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

template <typename T>
class Array
{
	T *_array;
	unsigned int _len;
	public:
		// conanical form
		Array(void);
		~Array(void);
		Array(Array const & src); // copy constructor
		Array & operator=(Array const & rhs); // copy assignment

		// construction with unsigned int n parameter
		Array(unsigned int n);

		//getter
		T *getArray(void) const;
		unsigned int size() const;

		//subscript operator[]
		T & operator[](unsigned int index);
		T const & operator[](unsigned const index) const; // just extra
};

# include "Array.tpp"

#endif
