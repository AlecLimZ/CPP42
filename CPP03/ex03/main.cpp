/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:48:39 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/01 15:29:56 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a("Jeff");
	DiamondTrap b;

	a.whoAmI();
	b.whoAmI();
	std::cout << a.DiamondTrap::_name << std::endl;
	std::cout << b << std::endl;
	while (a.getHp() > 0)
	{
		a.takeDamage(22);
		a.beRepaired(5);
		a.attack("ScarTrap's Monster");
	}
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	b = a;
	a.whoAmI();
	b.whoAmI();
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	return (0);
}
