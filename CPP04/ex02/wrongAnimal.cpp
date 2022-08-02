/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:04:17 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/01 16:14:13 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Unknown")
{
	std::cout << YELLOW"===WrongAnimal Constructor(Default)==="DEF << std::endl;
	std::cout << "WrongAnimal type: " << getType() << std::endl;
	std::cout << YELLOW"=================================\n"DEF << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << BRED"===WrongAnimal Destructor==="DEF << std::endl;
	std::cout << "WrongAnimal type: " << getType() << std::endl;
	std::cout << BRED"========================\n"DEF << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src): type(src.getType())
{
	std::cout << YELLOW"WrongAnimal Class's Copy Construstor called\n"DEF << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << YELLOW"WrongAnimal Class's Copy Assignment Called\n"DEF << std::endl;
	if (this != &rhs)
	{
		this->~WrongAnimal();
		new (this) WrongAnimal(rhs);
	}
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string n)
{
	this->type = n;
}

void	WrongAnimal::makeSound() const
{
	std::cout << MAG << getType() << ": ...............[from WrongAnimal class]\n"DEF << std::endl;
}
