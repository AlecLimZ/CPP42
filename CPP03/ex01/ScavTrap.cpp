/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:59:38 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/25 17:22:02 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	setName("Sdefault");
	setEp(50);
	setAtk(20);
	std::cout << "\n===ScavTrap Constructor[Default]===" << std::endl;
	std::cout << "Name: " << this->getName() << std::endl;
	std::cout << "Hitpoints: " << this->getHp() << std::endl;
	std::cout << "Energy points: " << this->getEp() << std::endl;
	std::cout << "Attack damage: " << this->getAtk() << std::endl;
	std::cout << "====================================\n" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "===ScavTrap Destructor===" << std::endl;
	std::cout << this->getName() << "[inherit from class ScavTrap]'s lifetime is over"
		<< std::endl;
	std::cout << "=========================\n" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "ScavTrap's copy constructor is called" << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string n)
{
	setName(n);
	setEp(50);
	setAtk(20);
	std::cout << "\n===ScavTrap Constructor[Parameter]===" << std::endl;
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Hitpoints: " << getHp() << std::endl;
	std::cout << "Energy points: " << getEp() << std::endl;
	std::cout << "Attack damage: " << getAtk() << std::endl;
	std::cout << "======================================\n" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap's copy assignment is called" << std::endl;
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
	std::cout << "ScavTrap's copy assignment is called" << std::endl;
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
	std::cout << "ScavTrap " << getName() << " is on Gate Keeper mode\n" << std::endl;
}

std::ostream & operator<<(std::ostream & o, ScavTrap const & rhs)
{
	o << "===Check ScavTrap " << rhs.getName() << "'s Status===" << std::endl;
	o << "Hitpoints: " << rhs.getHp() << std::endl;
	o << "Energy points: " << rhs.getEp() << std::endl;
	o << "Attack damage: " << rhs.getAtk() << std::endl;
	return (o);
}
