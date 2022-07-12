/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:09:06 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/07 16:10:22 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Please input ./replace <filename> <str1> <str2>\n";
		return (1);
	}
	Replace f(av[1]);
	f.R_copy(av[2], av[3]);
	return (0);
}
