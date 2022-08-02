/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:06:00 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/02 13:47:29 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Dog::Dog(void): _d(new Brain()), d_id(AAnimal::_id)
{
	AAnimal::type = "Dog";
	std::cout << YELLOW"===Dog Constructor(Default)==="DEF << std::endl;
	std::cout << "AAnimal type: " << getType() << std::endl;
	std::cout << "AAnimal id: " << AAnimal::_id << std::endl;
	std::cout << "Brain address: " << _d << std::endl;
	std::cout << YELLOW"=============================="DEF << std::endl;
}

Dog::~Dog(void)
{
	std::cout << BRED"===Dog Destructor==="DEF << std::endl;
	std::cout << "AAnimal type: " << getType() << std::endl;
	std::cout << "AAnimal id: " << AAnimal::_id << std::endl;
	std::cout << "Deleting brain " << _d << std::endl;
	delete _d;
	std::cout << BRED"===================="DEF << std::endl;
}

Dog::Dog(Dog const & src): _d(new Brain()), d_id(AAnimal::_id)
{
	_d->setIdeas(src.getIdea());
	setType(src.getType());
	std::cout << YELLOW"Dog class's Copy Constructor called\n"DEF << std::endl;
	std::cout << "AAnimal type: " << getType() << std::endl;
	std::cout << "AAnimal id: " << AAnimal::_id << std::endl;
	std::cout << "Brain address: " << _d << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << YELLOW"Dog class's Copy Assignment Called\n"DEF << std::endl;
	if (this != &rhs)
	{
		setType(rhs.getType());
		*_d = *(rhs.getBrain());
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << BLUE << this->getType() << ": Bark Bark[from Dog class]\n"DEF << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (_d);
}

std::ostream & operator<<(std::ostream & o, Dog const & rhs)
{
	o << BCYAN"\n===Check Dog Status===" << std::endl;
	o << "brain address: " << rhs.getBrain() << std::endl;
	o << "animal id: " << rhs.getId() << DEF << std::endl;
	return (o);
}

int	Dog::getId(void) const
{
	return (this->d_id);
}

void	Dog::giveBrain(std::string i)
{
	_d->setIdeas(i);
}

void	Dog::showBrain(void) const
{
	_d->printIdeas();
}

std::string Dog::getIdea(void) const
{
	return (_d->getIdea());
}
