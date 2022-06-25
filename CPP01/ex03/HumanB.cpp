/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:11:05 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/25 17:23:11 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n):name(n){}

void	HumanB::setWeapon(Weapon & club)
{
	weapon = &club.getType();
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << *weapon << std::endl;
}
