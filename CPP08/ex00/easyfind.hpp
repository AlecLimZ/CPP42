/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:05:15 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/03 11:28:50 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

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

# include <iostream>

// Sequence containers
# include <vector> // dynamic array
# include <array> // static array
# include <deque> // double-end queue
# include <forward_list> // singly-linked list
# include <list> // doubly-linked list

using std::cout;
using std::endl;
using std::vector;

template <typename T>
bool	easyfind(T & val, int find)
{
	for (typename T::iterator i = val.begin(); i != val.end(); ++i)
		if (*i == find)
			return (true);
	return (false);
}

#endif
