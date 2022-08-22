/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:23:18 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/22 13:42:28 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

template<typename T>
void swap(T & a, T & b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min(T & a, T & b)
{
	return (a < b ? a : b);
}

template<typename T>
T max(T & a, T & b)
{
	return (a > b ? a : b);
}
#endif
