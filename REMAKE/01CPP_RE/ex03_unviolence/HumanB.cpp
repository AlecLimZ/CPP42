/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:47:40 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/07 15:49:26 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n):name(n)
{
	this->weapon = NULL;
}

void	HumanB::setWeapon(Weapon & club)
{
	weapon = &club.getType();
}

void	HumanB::attack(void)
{
	if (!this->weapon)
		std::cout << this->name << " attacks with bare hands " << std::endl;
	else
		std::cout << this->name << " attacks with their " << *weapon << std::endl;
}
