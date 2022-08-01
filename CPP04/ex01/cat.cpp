/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:38:05 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/01 19:56:38 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Cat::Cat(void): _c(new Brain())
{
	Animal::type = "Cat";
	std::cout << YELLOW"===Cat Constructor(Default)==="DEF << std::endl;
	std::cout << "Animal type: " << getType() << std::endl;
	std::cout << "Brain address: " << _c << std::endl;
	std::cout << YELLOW"============================="DEF << std::endl;
}

Cat::~Cat(void)
{
	std::cout << BRED"===Cat Destructor==="DEF << std::endl;
	std::cout << "Animal type: " << getType() << std::endl;
	std::cout << "Animal id: " << Animal::_id << std::endl;
	std::cout << "Deleting brain " << _c << "....." << std::endl;
	delete _c;
	std::cout << BRED"===================="DEF << std::endl;
}

Cat::Cat(Cat const & src): _c(new Brain())
{
	setType(src.getType());
	std::cout << YELLOW"Cat class's Copy Constructor called\n"DEF << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << YELLOW"Cat class's Copy Assignment Called\n"DEF << std::endl;
	if (this != &rhs)
	{
		setType(rhs.getType());
		*_c = *(rhs.getBrain());
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << CYAN << this->getType() << ": Meow meow[from Cat class]\n"DEF << std::endl;
}

Brain * Cat::getBrain(void) const
{
	return (_c);
}
