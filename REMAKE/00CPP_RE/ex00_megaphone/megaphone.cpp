/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:33:39 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/05 13:34:20 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int j = 1; j < ac; j++)
		{
			for (int i = 0; i < (int)strlen(av[j]); i++)
				if (av[j][i] >= 'a' && av[j][i] <= 'z')
					av[j][i] -= 32;
			std::cout << av[j];
		}
		std::cout << std::endl;
	}
	return (0);
}
