/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:38:05 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/01 16:29:37 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

WrongCat::WrongCat(void)
{
	WrongAnimal::type = "WrongCat";
	std::cout << YELLOW"===WrongCat Constructor(Default)==="DEF << std::endl;
	std::cout << "Animal type: " << getType() << std::endl;
	std::cout << YELLOW"============================="DEF << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << BRED"===WrongCat Destructor==="DEF << std::endl;
	std::cout << "Animal type: " << getType() << std::endl;
	std::cout << BRED"===================="DEF << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	setType(src.getType());
	std::cout << YELLOW"WrongCat class's Copy Constructor called\n"DEF << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << YELLOW"WrongCat class's Copy Assignment Called\n"DEF << std::endl;
	if (this != &rhs)
	{
		this->~WrongCat();
		new (this) WrongCat(rhs);
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << CYAN << this->getType() << ": Meow meow[from WrongCat class]\n"DEF << std::endl;
}
