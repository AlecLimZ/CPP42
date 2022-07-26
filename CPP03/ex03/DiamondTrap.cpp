/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:24:23 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/26 13:45:33 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): _name("DiamondDefault")
{
	setHp(getHp()); // FragTrap's hp representation ClapTrap's, hence get from ClapTrap
	setAtk(getFatk()); // get FragTrap class's actual own atk status
	ClapTrap::_name = "DiamondDefault_clap_name";
	std::cout << BGREEN"\n===DiamondTrap Constructor[Default]==="DEF << std::endl;
	std::cout << "Name: " << getDname() << std::endl;
	std::cout << "Parent name: " << getName() << std::endl;
	std::cout << "Hitpoints: " << getHp() << std::endl;
	std::cout << "Energy points: " << getEp() << std::endl;
	std::cout << "Attack damage: " << getAtk() << std::endl;
	std::cout << BGREEN"======================================\n"DEF << std::endl;
}

DiamondTrap::DiamondTrap(std::string n): _name(n)
{
	setHp(getHp()); // FragTrap's hp representation ClapTrap's, hence get from ClapTrap
	setAtk(getFatk()); // get FragTrap class's actual own atk status
	ClapTrap::_name = n + "_clap_name";
	std::cout << BGREEN"\n===DiamondTrap Constructor[Default]==="DEF << std::endl;
	std::cout << "Name: " << getDname() << std::endl;
	std::cout << "Parent name: " << getName() << std::endl;
	std::cout << "Hitpoints: " << getHp() << std::endl;
	std::cout << "Energy points: " << getEp() << std::endl;
	std::cout << "Attack damage: " << getAtk() << std::endl;
	std::cout << BGREEN"======================================\n"DEF << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << MAG"===DiamondTrap Destructor==="DEF << std::endl;
	std::cout << getDname() << "'s lifetime is over" << std::endl;
	std::cout << MAG"===========================\n"DEF << std::endl;
}

std::string DiamondTrap::getDname(void) const
{
	return (this->_name);
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	*this = src;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << BBLUE"\nDiamondTrap's copy assignment is called\n"DEF << std::endl;
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);
		_name = rhs.getDname();
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & o, DiamondTrap const & rhs)
{
	o << YELLOW"\n===Check DiamondTrap " << rhs.getDname() << "'s Status==="DEF << std::endl;
	o << "Hitpoints: " << rhs.getHp() << std::endl;
	o << "Energy points: " << rhs.getEp() << std::endl;
	o << "Attack damages: " << rhs.getAtk() << std::endl;
	return (o);
}

void	DiamondTrap::attack(const std::string & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap's name: " << getDname() << std::endl;
	std::cout << "ClapTrap's name: " << getName() << std::endl;
}
