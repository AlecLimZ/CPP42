/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:34:45 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/23 19:06:02 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name;
	std::string temp;
	int	i = 0;

	std::cout << "What name you want to put for zombie?: ";
	getline(std::cin, name);
	std::cout << "How many zombie u wanna to create?: ";
	std::cin.ignore(0);
	while (getline(std::cin, temp))
	{
		std::stringstream ss(temp);
		if (ss >> i)
			if (ss.eof())
				break;
		std::cout << "Error. Please numbers only\nHow many zombie u wanna to create?: ";
	}
	Zombie* horde = zombieHorde(i, name);

	delete [] horde;
	return 0;
}
