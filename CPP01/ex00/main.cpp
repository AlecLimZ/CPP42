/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:56:35 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/22 20:39:30 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string a;

	std::cout << "What zombie name u want?" << std::endl;
	getline(std::cin, a);
	Zombie *z = newZombie(a);
	delete z;
	randomChump(a);
	return (0);
}
