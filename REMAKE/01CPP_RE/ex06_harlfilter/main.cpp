/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:34:56 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/07 17:37:55 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string input = av[1];
		if (input == "DEBUG" || input == "INFO" || input == "WARNING" || input == "ERROR")
		{
			std::string input = av[1];
			Harl h;
			h.complain(input);
		}
		else
			std::cerr << "Error: Please input only one word of either DEBUG, INFO, WARNING or ERROR" << std::endl;
	}
	else
		std::cerr << "Error: Please input only one word of either DEBUG, INFO, WARNING or ERROR" << std::endl;
	return (0);
}
