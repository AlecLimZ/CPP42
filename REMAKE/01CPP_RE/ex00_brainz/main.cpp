/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:16:06 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/07 13:23:09 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string a;

	std::cout << "What zombie name u want?" << std::endl;
	getline(std::cin, a);
	Zombie *z = newZombie(a);
	z->announce();
	delete z;
	randomChump(a);
	return (0);
}
