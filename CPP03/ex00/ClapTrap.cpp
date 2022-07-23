/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:03:58 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/23 17:18:25 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Dummy"), _hitp(10), _ep(10), _atkd(0)
{
	std::cout << "===Claptrap Status[Constructor]===" << std::endl;
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Hitpoints: " << this->_hitp << std::endl;
	std::cout << "Energy points: " << this->_ep << std::endl;
	std::cout << "Attack damage: " << this->_atkd << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "===[Destructor]===" << std::endl;
	std::cout << "Claptrap " << this->_name << "'s lifetime is over" << std::endl;
}
