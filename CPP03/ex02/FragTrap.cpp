/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:49:51 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/26 15:11:47 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	setName("FragDefault");
	setEp(100);
	setAtk(30);
	std::cout << BGREEN"\n===FragTrap Constructor[Default]==="DEF << std::endl;
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Hit points: " << getHp() << std::endl;
	std::cout << "Energy points: " << getEp() << std::endl;
	std::cout << "Attack damage: " << getAtk() << std::endl;
	std::cout << BGREEN"===================================\n"DEF << std::endl;
}

FragTrap::FragTrap(std::string n)
{
	setName(n);
	setEp(100);
	setAtk(30);
	std::cout << BGREEN"\n===FragTrap Constructor[Parameter]==="DEF << std::endl;
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Hit points: " << getHp() << std::endl;
	std::cout << "Energy points: " << getEp() << std::endl;
	std::cout << "Attack damage: " << getAtk() << std::endl;
	std::cout << BGREEN"===================================\n"DEF << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << BBLUE"FragTrap's copy assignment is called\n"DEF;
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
	std::cout << MAG"\n===FragTrap Destructor==="DEF << std::endl;
	std::cout << "FragTrap " << getName() << "'s lifetime is over\n" << std::endl;
	std::cout << MAG"==========================="DEF << std::endl;
}

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs)
{
	o << BYELLOW"===Check FragTrap " << rhs.getName() << "'s Status==="DEF << std::endl;
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

void	FragTrap::attack(const std::string & target)
{
	if (this->getHp() <= 0)
		std::cout << RED"FragTrap " << this->getName() << "[hp: " << this->getHp()
			<< "] boomed and cannot attack " << target << DEF << std::endl;
	else if (this->getEp() <= 0)
		std::cout << RED"FragTrap " << this->getName() << "[Ep: " << this->getEp()
			<< "] cannot attack anymore due to zero ep" << target << DEF << std::endl;
	else
	{
		std::cout << BCYAN"FragTrap " << this->getName() << " spikes " << target
			<< ", causing " << this->getAtk() << " points of damage!" << std::endl;
		this->setEp(this->getEp() - 1);
		std::cout << "FragTrap " << this->getName() << "'s EP is now "
			<< this->getEp() << "\n"DEF << std::endl;
	}
}
