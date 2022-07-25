/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:48:39 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/25 17:40:29 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap a;
	FragTrap b("KINGFRAG");

	std::cout << a << std::endl;
	a.attack("UglyFrog");
	std::cout << a << std::endl;
	while (b.getEp() > 0)
		b.attack("Nightmare horse");
	b.attack("Nightmare horse");
	std::cout << b << std::endl;
	while (a.getHp() > 0)
	{
		a.takeDamage(27);
		a.attack("UglyFrog");
	}
	ClapTrap c("Grandmaster");
	ScavTrap d("Scarlet");
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	a.highFivesGuys();
	b.highFivesGuys();
	std::cout << "\nAfter d:" << d.getName() << " copy a:" << a.getName() << std::endl;
	d = a;
	std::cout << a << std::endl;
	std::cout << d << std::endl;
	std::cout << "\nAfter a:" << a.getName() << " copy b:" << b.getName() << std::endl;
	a = b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	return (0);
}
