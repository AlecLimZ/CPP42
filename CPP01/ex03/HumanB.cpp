/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:11:05 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/28 20:59:16 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n):name(n)
{
	this->weapon = NULL;
}

void	HumanB::setWeapon(Weapon & club)
{
	weapon = &club.getType(); // pointer works here while reference cannot. 
}

void	HumanB::attack(void)
{
	if (!this->weapon)
		std::cout << this->name << " attacks with bare hands " << std::endl;
	else
		std::cout << this->name << " attacks with their " << *weapon << std::endl;
}
