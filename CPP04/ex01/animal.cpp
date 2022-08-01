/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:04:17 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/01 18:36:04 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

int Animal::_id = 0;

Animal::Animal(void) : type("Unknown")
{
	_id++;
	std::cout << YELLOW"===Animal Constructor(Default)==="DEF << std::endl;
	std::cout << "Animal type: " << getType() << std::endl;
	std::cout << "new Animal id: " << _id << std::endl;
	std::cout << YELLOW"=================================\n"DEF << std::endl;
}

Animal::~Animal(void)
{
	std::cout << BRED"===Animal Destructor==="DEF << std::endl;
	std::cout << "Animal type: " << getType() << std::endl;
	std::cout << "Animal id: " << _id << std::endl;
	std::cout << BRED"========================\n"DEF << std::endl;
	_id--;
}

Animal::Animal(Animal const & src): type(src.getType())
{
	_id++;
	std::cout << BGREEN"\nAnimal Class's Copy Constructor called"DEF << std::endl;
	std::cout << BGREEN"new Animal id: " << _id << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << BGREEN"\nAnimal Class's Copy Assignment called"DEF << std::endl;
	std::cout << BGREEN"Animal id: " << _id << std::endl;
	if (this != &rhs)
	{
		this->Animal::~Animal();
		new (this) Animal(rhs);
	}
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(std::string n)
{
	this->type = n;
}

void	Animal::makeSound() const
{
	std::cout << MAG << getType() << ": ...............[from Animal class]\n"DEF << std::endl;
}
