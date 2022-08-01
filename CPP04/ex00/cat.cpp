/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:38:05 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/01 16:29:20 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Cat::Cat(void)
{
	Animal::type = "Cat";
	std::cout << YELLOW"===Cat Constructor(Default)==="DEF << std::endl;
	std::cout << "Animal type: " << getType() << std::endl;
	std::cout << YELLOW"============================="DEF << std::endl;
}

Cat::~Cat(void)
{
	std::cout << BRED"===Cat Destructor==="DEF << std::endl;
	std::cout << "Animal type: " << getType() << std::endl;
	std::cout << BRED"===================="DEF << std::endl;
}

Cat::Cat(Cat const & src)
{
	setType(src.getType());
	std::cout << YELLOW"Cat class's Copy Constructor called\n"DEF << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << YELLOW"Cat class's Copy Assignment Called\n"DEF << std::endl;
	if (this != &rhs)
	{
		this->Cat::~Cat();
		new (this) Cat(rhs);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << CYAN << this->getType() << ": Meow meow[from Cat class]\n"DEF << std::endl;
}
