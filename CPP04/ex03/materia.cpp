/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:48:46 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/03 16:25:31 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "materia.hpp"

int AMateria::id = 0;

AMateria::AMateria(void):isuse(0), owner("None")
{
	id++;
	setId(id);
	cout << YELLOW"\n[" << getId() << "]===AMateria New Constructor[Default]===\n"DEF
		<< endl;
}

AMateria::~AMateria(void)
{
	cout << BRED"\n[" << getId() << "]===AMateria Destructor===\n"DEF << endl;
	id--;
	setId(id);
}

AMateria::AMateria(AMateria const & src):t(src.getType()), isuse(src.isuse), owner("None")
{
	id++;
	setId(id);
	cout << YELLOW"\n[" << getId() << "]===AMateria New Copy Constructor==="DEF << endl;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	cout << YELLOW"\n===AMateria Copy Assignment==="DEF << endl;
	if (this != &rhs)
		this->t = rhs.getType();
	return (*this);
}

AMateria::AMateria(std::string const & type):t(type), isuse(0)
{
	id++;
	setId(id);
	cout << YELLOW"\n[" << getId() << "]===AMateria New Constructor[With Parameter]==="DEF << endl;
}

std::string const & AMateria::getType() const
{
	return (this->t);
}

void	AMateria::use(ICharacter & target)
{
	(void)target;
}

int	AMateria::getId(void) const
{
	return (this->_id);
}

void	AMateria::setId(int const i)
{
	this->_id = i;
}

void	AMateria::setIsUse(int const i)
{
	this->isuse = i;
}

int	AMateria::getIsUse(void) const
{
	return (this->isuse);
}

void AMateria::setOwner(std::string n)
{
	this->owner = n;
}

std::string const & AMateria::getOwner(void) const
{
	return (this->owner);
}
