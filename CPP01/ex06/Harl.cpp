/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:11:49 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/28 18:25:24 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "\n[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "\n[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "\n[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\n[ ERROR ]\n";
	std::cerr << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	int i = !level.compare("DEBUG") ? 1 : !level.compare("INFO") ? 2 : 
		!level.compare("WARNING") ? 3 : !level.compare("ERROR") ? 4 : 0;
	switch (i)
	{
		case 1:
			this->debug();
		case 2:
			this->info();
		case 3:
			this->warning();
		default:
			this->error();
	}
}
