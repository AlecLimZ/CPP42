/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:59:38 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/26 13:52:07 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	setName("Sdefault");
	setEp(50);
	setAtk(20);
	std::cout << BGREEN"\n===ScavTrap Constructor[Default]==="DEF << std::endl;
	std::cout << "Name: " << this->getName() << std::endl;
	std::cout << "Hitpoints: " << this->getHp() << std::endl;
	std::cout << "Energy points: " << this->getEp() << std::endl;
	std::cout << "Attack damage: " << this->getAtk() << std::endl;
	std::cout << BGREEN"====================================\n"DEF << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << MAG"===ScavTrap Destructor==="DEF << std::endl;
	std::cout << "ScavTrap " << this->getName() << "'s lifetime is over"
		<< std::endl;
	std::cout << MAG"=========================\n"DEF << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << BBLUE"ScavTrap's copy constructor is called"DEF << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string n)
{
	setName(n);
	setEp(50);
	setAtk(20);
	std::cout << BGREEN"\n===ScavTrap Constructor[Parameter]==="DEF << std::endl;
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Hitpoints: " << getHp() << std::endl;
	std::cout << "Energy points: " << getEp() << std::endl;
	std::cout << "Attack damage: " << getAtk() << std::endl;
	std::cout << BGREEN"======================================\n"DEF << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << BBLUE"ScavTrap's copy assignment is called"DEF << std::endl;
	if (this != &rhs)
	{
		setName(rhs.getName());
		setHp(rhs.getHp());
		setEp(rhs.getEp());
		setAtk(rhs.getAtk());
	}
	return (*this);
}

ScavTrap & ScavTrap::operator=(ClapTrap const & rhs)
{
	std::cout << BBLUE"ScavTrap's copy assignment is called with ClapTrap object"DEF << std::endl;
	if (this != &rhs)
	{
		setName(rhs.getName());
		setHp(rhs.getHp());
		setEp(rhs.getEp());
		setAtk(rhs.getAtk());
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << BRED"ScavTrap " << getName() << " is on Gate Keeper mode\n"DEF << std::endl;
}

std::ostream & operator<<(std::ostream & o, ScavTrap const & rhs)
{
	o << BYELLOW"===Check ScavTrap " << rhs.getName() << "'s Status==="DEF << std::endl;
	o << "Hitpoints: " << rhs.getHp() << std::endl;
	o << "Energy points: " << rhs.getEp() << std::endl;
	o << "Attack damage: " << rhs.getAtk() << std::endl;
	return (o);
}

void	ScavTrap::attack(const std::string & target)
{
	if (this->getHp() <= 0)
		std::cout << RED"ScavTrap " << this->getName() << "[hp: " << this->getHp()
			<< "] fallen down and cannot attack " << target << DEF << std::endl;
	else if (this->getEp() <= 0)
		std::cout << RED"ScavTrap " << this->getName() << "[Ep: " << this->getEp()
			<< "] is out of energy to attack " << target << DEF << std::endl;
	else
	{
		std::cout << BCYAN"ScavTrap " << this->getName() << " slams " << target
			<< ", causing " << this->getAtk() << " points of damage!" << std::endl;
		this->setEp(this->getEp() - 1);
		std::cout << "ScavTrap " << this->getName() << "'s EP is now "
			<< this->getEp() << "\n"DEF << std::endl;
	}
}
