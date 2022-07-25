/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:03:58 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/25 17:38:38 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Dummy"), _hitp(100), _ep(10), _atkd(0)
{
	std::cout << "\n===Claptrap Status[Default Constructor]===" << std::endl;
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Hitpoints: " << getHp() << std::endl;
	std::cout << "Energy points: " << getEp() << std::endl;
	std::cout << "Attack damage: " << getAtk() << std::endl;
	std::cout << "==========================================\n" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\n===[ClapTrap Destructor]===" << std::endl;
	std::cout << "Claptrap " << getName() << "'s lifetime is over" << std::endl;
	std::cout << "===========================\n" << std::endl;
}

ClapTrap::ClapTrap(std::string n): _name(n), _hitp(100), _ep(10), _atkd(0)
{
	std::cout << "\n===Claptrap Status[Parameter Constructor]===" << std::endl;
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Hitpoints: " << getHp() << std::endl;
	std::cout << "Energy points: " << getEp() << std::endl;
	std::cout << "Attack damage: " << getAtk() << std::endl;
	std::cout << "============================================\n" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

void	ClapTrap::setName(std::string n)
{
	this->_name = n;
}

void	ClapTrap::setHp(int hp)
{
	if (hp < 0)
		this->_hitp = 0;
	else
		this->_hitp = hp;
}

void	ClapTrap::setEp(int ep)
{
	if (ep < 0)
		this->_ep = ep;
	else
		this->_ep = ep;
}

void	ClapTrap::setAtk(int atk)
{
	if (atk < 0)
		this->_atkd = 0;
	else
		this->_atkd = atk;
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHp(void) const
{
	return (this->_hitp);
}

int ClapTrap::getEp(void) const
{
	return (this->_ep);
}

int	ClapTrap::getAtk(void) const
{
	return (this->_atkd);
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap's copy assignment called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitp = rhs.getHp();
		this->_ep = rhs.getEp();
		this->_atkd = rhs.getAtk();
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & i)
{
	o << "\n===Check ClapTrap " << i.getName() << "'s Status===" << std::endl;
	o << "Hitpoints: " << i.getHp() << std::endl;
	o << "Energy points: " << i.getEp() << std::endl;
	o << "Attack damage: " << i.getAtk() << std::endl;
	o << "==================================\n";
	return (o);
}

void	ClapTrap::attack(const std::string & target)
{
	if (this->getHp() <= 0)
		std::cout << "ClapTrap " << this->getName() << "[hp: " << this->getHp()
			<< "] fainted and cannot attack " << target << std::endl;
	else if (this->getEp() <= 0)
		std::cout << "ClapTrap " << this->getName() << "[Ep: " << this->getEp()
			<< "] no energy to attack " << target << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target
			<< ", causing " << this->getAtk() << " points of damage!" << std::endl;
		this->setEp(this->getEp() - 1);
		std::cout << "ClapTrap " << this->getName() << "'s EP is now "
			<< this->getEp() << "\n" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << "[hp: " << this->getHp() << "] takes "
		<< amount;
	if (amount <= 1)
		std::cout << " damage!\n";
	else
		std::cout << " damages!\n";
	this->setHp(this->getHp() - amount);
	std::cout << "ClapTrap " << this->getName() << "'s HP status is now: "
		<< this->getHp() << "\n" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHp() == 0)
	{
		std::cout << "ClapTrap " << this->getName() << "[hp: " << this->getHp()
			<< "] is fainted and not able to repair itself!\n" << std::endl;
	}
	else if (this->getEp() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << "[hp: " << this->getHp()
		<< "] is healed by " << amount << "!" << std::endl;
		this->setHp(this->getHp() + amount);
		std::cout << "ClapTrap " << this->getName() << "'s HP status is now: "
		<< this->getHp() << std::endl;
		this->setEp(this->getEp() - 1);
		std::cout << "ClapTrap " << this->getName() << "'s EP is now "
			<< this->getEp() << "\n" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->getName() << "[Ep: " << this->getEp()
			<< "] has no energy to repair itself\n" << std::endl;
}
