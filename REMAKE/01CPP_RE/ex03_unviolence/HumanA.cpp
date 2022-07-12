/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:37:45 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/07 15:52:44 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon & club):name(n), weapon(club.getType())
{}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon << std::endl;
}
