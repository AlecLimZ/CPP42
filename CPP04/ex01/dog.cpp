/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:06:00 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/01 19:52:24 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Dog::Dog(void): _d(new Brain())
{
	Animal::type = "Dog";
	std::cout << YELLOW"===Dog Constructor(Default)==="DEF << std::endl;
	std::cout << "Animal type: " << getType() << std::endl;
	std::cout << "Brain address: " << _d << std::endl;
	std::cout << YELLOW"=============================="DEF << std::endl;
}

Dog::~Dog(void)
{
	std::cout << BRED"===Dog Destructor==="DEF << std::endl;
	std::cout << "Animal type: " << getType() << std::endl;
	std::cout << "Animal id: " << Animal::_id << std::endl;
	std::cout << "Deleting brain " << _d << std::endl;
	delete _d;
	std::cout << BRED"===================="DEF << std::endl;
}

Dog::Dog(Dog const & src): _d(new Brain())
{
	setType(src.getType());
	std::cout << YELLOW"Dog class's Copy Constructor called\n"DEF << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << YELLOW"Dog class's Copy Assignment Called\n"DEF << std::endl;
	if (this != &rhs)
	{
		setType(rhs.getType());
		_d = new Brain();
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << BLUE << this->getType() << ": Bark Bark[from Dog class]\n"DEF << std::endl;
}
