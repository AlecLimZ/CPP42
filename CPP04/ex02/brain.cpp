/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:58:20 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/02 11:50:41 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain(void)
{
	setIdeas("Default");
	std::cout << BYELLOW"|Brain Constructor(Default)|"<< std::endl;
	std::cout << "|Brain's idea address: " << ideas << DEF << std::endl;
}

Brain::~Brain(void)
{
	std::cout << RED">>>Brain Succesfully Destructed<<<"DEF << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << YELLOW"Brain class's copy constructor called\n"DEF << std::endl;
	setIdeas(src.getIdea());
}

Brain const & Brain::operator=(Brain const & rhs)
{
	std::cout << YELLOW"Brain class's copy assignment called\n"DEF << std::endl;
	if (this != &rhs)
		setIdeas(rhs.getIdea());
	return (*this);
}

void	Brain::setIdeas(std::string i)
{
	for (int a = 0; a < 100; a++)
		this->ideas[a] = i;
}

void	Brain::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << "| " << i << ":" << this->ideas[i] << " |";
	std::cout << "\n";
}

std::string Brain::getIdea(void) const
{
		return (this->ideas[0]);
}
