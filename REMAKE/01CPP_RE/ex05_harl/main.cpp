/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:24:14 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/07 16:27:27 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	h;
	std::string	choose;

	std::cout << "===HARL PROGRAM===" << std::endl;
	std::cout << "Pick one from the list as below:" << std::endl;
	std::cout << "1. DEBUG\n2. INFO\n3. WARNING\n4. ERROR\nPlease choose one of their number:";
	getline(std::cin, choose);
	while (choose != "1" && choose != "2" && choose != "3" && choose != "4")
	{
		std::cerr << "Error input: Please input only number 1(DEBUG), 2(INFO), 3(WARNING) or 4(ERROR)\nYour choice:";
		std::cin.ignore(0);
		getline(std::cin, choose);
	}
	h.complain(choose);
	return (0);
}
