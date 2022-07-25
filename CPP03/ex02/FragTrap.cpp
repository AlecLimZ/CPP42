/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:49:51 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/25 17:36:11 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	setName("FragDefault");
	setEp(100);
	setAtk(30);
	std::cout << "\n===FragTrap Constructor[Default]===" << std::endl;
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Hit points: " << getHp() << std::endl;
	std::cout << "Energy points: " << getEp() << std::endl;
	std::cout << "Attack damage: " << getAtk() << std::endl;
	std::cout << "===================================\n" << std::endl;
}

FragTrap::FragTrap(std::string n)
{
	setName(n);
	setEp(100);
	setAtk(30);
	std::cout << "\n===FragTrap Constructor[Parameter]===" << std::endl;
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Hit points: " << getHp() << std::endl;
	std::cout << "Energy points: " << getEp() << std::endl;
	std::cout << "Attack damage: " << getAtk() << std::endl;
	std::cout << "===================================\n" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap's copy assignment is called\n";
	if (this != &rhs)
	{
		setName(rhs.getName());
		setHp(rhs.getHp());
		setEp(rhs.getEp());
		setAtk(rhs.getAtk());
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "\n===FragTrap Destructor===" << std::endl;
	std::cout << "FragTrap " << getName() << "'s lifetime is over\n" << std::endl;
}

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs)
{
	o << "===Check FragTrap " << rhs.getName() << "'s Status===" << std::endl;
	o << "Hitpoints: " << rhs.getHp() << std::endl;
	o << "Energy points: " << rhs.getEp() << std::endl;
	o << "Attack damage: " << rhs.getAtk() << std::endl;
	return (o);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << getName() << ": You can do!" << std::endl;
	std::cout << getName() << ": Nothing is impossible" << std::endl;
	std::cout << getName() << ": All is good" << std::endl;
	std::cout << getName() << ": Wish you all the best" << std::endl;
	std::cout << getName() << ": Never give up on your goals" << std::endl;
}
