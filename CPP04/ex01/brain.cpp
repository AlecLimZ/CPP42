/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:58:20 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/01 19:14:03 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain(void)
{
	std::cout << YELLOW"|Brain Constructor(Default)|"DEF << std::endl;
}

Brain::~Brain(void)
{
	std::cout << RED">>>Brain Succesfully Destructed<<<"DEF << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << YELLOW"Brain class's copy constructor called\n"DEF << std::endl;
	(void)src;
}

Brain const & Brain::operator=(Brain const & rhs)
{
	std::cout << YELLOW"Brain class's copy assignment called\n"DEF << std::endl;
	if (this != &rhs)
	{
		this->~Brain();
		new (this) Brain(rhs);
	}
	return (*this);
}
