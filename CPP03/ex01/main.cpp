/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:48:39 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/25 17:24:06 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("OldTrapzz");
	ScavTrap b("SuperTrapo");

	a.attack("GiantMon");
	b.attack("Boss Zombie");
	b.guardGate();
	std::cout << "a uses getName(): " << a.getName() << std::endl;
	std::cout << "b uses getName() from ClapTrap: " << b.getName() << std::endl;

	std::cout << b << std::endl;
	ScavTrap c(b);
	c.setName("CopySuperTrapo");
	std::cout << c << std::endl;
	while (c.getHp() > 0)
	{
		c.takeDamage(33);
		c.attack("Z-godlike");
	}
	std::cout << c << std::endl;
	std::cout << b << std::endl;
	int i = 2;
	while (b.getEp() > 0)
	{
		b.attack("Boss Zombie");
		std::cout << "so far " << b.getName() << " done this attack for "
			<< i++ << " times" << std::endl;
	}
	b.attack("Boss Zombie");
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << a << std::endl;
	std::cout << ">>> After c:" << c.getName() << " copy b:" << b.getName() << "<<<\n" << std::endl;
	c = b;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << ">>> After b:" << b.getName() << " copy a:" << a.getName() << "<<<\n" << std::endl;
	b = a;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << ">>> Then b:" << b.getName() << " copy c:" << c.getName() << "<<<\n" << std::endl;
	b = c;

	return (0);
}
