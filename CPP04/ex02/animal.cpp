/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:04:17 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/02 13:48:59 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

int AAnimal::_id = 0;

AAnimal::AAnimal(void)
{
	_id++;
	std::cout << YELLOW"===AAnimal Constructor(Default)==="DEF << std::endl;
	std::cout << "AAnimal type: " << getType() << std::endl;
	std::cout << "new AAnimal id: " << _id << std::endl;
	std::cout << YELLOW"=================================\n"DEF << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << BRED"===AAnimal Destructor==="DEF << std::endl;
	std::cout << "AAnimal type: " << getType() << std::endl;
	std::cout << "AAnimal id: " << _id << std::endl;
	std::cout << BRED"========================\n"DEF << std::endl;
	_id--;
}

AAnimal::AAnimal(AAnimal const & src)
{
	_id++;
	(void)src;
	std::cout << BGREEN"\nAAnimal Class's Copy Constructor called"DEF << std::endl;
	std::cout << BGREEN"new AAnimal id: " << _id << DEF << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << BGREEN"\nAAnimal Class's Copy Assignment called"DEF << std::endl;
	std::cout << BGREEN"AAnimal id: " << _id << DEF << std::endl;
	(void)rhs;
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}

void	AAnimal::setType(std::string n)
{
	this->type = n;
}

//void	AAnimal::makeSound() const
//{
//	std::cout << MAG << getType() << ": ...............[from AAnimal class]\n"DEF << std::endl;
//}

int		AAnimal::getId(void) const
{
	return (AAnimal::_id);
}
