/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:56:35 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/23 15:33:38 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string a;

	std::cout << "What zombie name u want?" << std::endl;
	getline(std::cin, a);
	Zombie *z = newZombie(a); //create new zombie by using new (similar to malloc)
	delete z; // the newZombie's object ends here
	randomChump(a); // create new zombie without using new
	return (0); // the chump zombie ends here
}
