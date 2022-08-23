/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:58:09 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/23 12:50:06 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

template <typename T>
void	ft_printelem(T const & elem)
{
	cout << elem << endl;
}

template <typename T>
void	iter(T const array[], unsigned int len, void (*fptr)(T const & elem))
{
	for (unsigned int i = 0; i < len; i++)
		fptr(array[i]);
}

#endif
