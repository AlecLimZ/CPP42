/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:38:05 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/02 13:47:15 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Cat::Cat(void): _c(new Brain()), c_id(AAnimal::_id)
{
	AAnimal::type = "Cat";
	std::cout << YELLOW"===Cat Constructor(Default)==="DEF << std::endl;
	std::cout << "AAnimal type: " << getType() << std::endl;
	std::cout << "AAnimal id: " << AAnimal::_id << std::endl;
	std::cout << "NEW Brain address: " << _c << std::endl;
	std::cout << YELLOW"============================="DEF << std::endl;
}

Cat::~Cat(void)
{
	std::cout << BRED"===Cat Destructor==="DEF << std::endl;
	std::cout << "AAnimal type: " << getType() << std::endl;
	std::cout << "AAnimal id: " << AAnimal::_id << std::endl;
	std::cout << "Deleting brain " << _c << "....." << std::endl;
	delete _c;
	std::cout << BRED"===================="DEF << std::endl;
}

Cat::Cat(Cat const & src): _c(new Brain()), c_id(AAnimal::_id)
{
	_c->setIdeas(src.getIdea());
	setType(src.getType());
	std::cout << YELLOW"Cat class's Copy Constructor called"DEF << std::endl;
	std::cout << "AAnimal type: " << getType() << std::endl;
	std::cout << "AAnimal id: " << AAnimal::_id << std::endl;
	std::cout << "NEW Brain address: " << _c << std::endl;
	std::cout << YELLOW"============================="DEF << std::endl;
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

std::ostream & operator<<(std::ostream & o, Cat const & rhs)
{
	o << BCYAN"\n===Check Cat status===" << std::endl;
	o << "brain address: " << rhs.getBrain() << std::endl;
	o << "animal id: " << rhs.getId() << DEF << std::endl;
	return (o);
}

int	Cat::getId(void) const
{
	return (this->c_id);
}

void	Cat::giveBrain(std::string i)
{
	_c->setIdeas(i);
}

void	Cat::showBrain(void) const
{
	_c->printIdeas();
}

std::string Cat::getIdea(void) const
{
	return (_c->getIdea());
}
