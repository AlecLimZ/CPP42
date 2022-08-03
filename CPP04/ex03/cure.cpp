/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:09:47 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/03 16:20:14 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "materia.hpp"

Cure::Cure(void):AMateria("cure"), _id(AMateria::getId())
{
	cout << YELLOW"[" << getId() << "]===CURE new Constructor[Default]==="DEF << endl;
	cout << "Material New Type: " << getType() << "\n" << endl;
}

Cure::~Cure(void)
{
	cout << BRED"[" << getId() << "]===CURE Destructor==="DEF << endl;
	cout << "Type: " << getType() << endl;
}

Cure::Cure(Cure const & src):AMateria(src.getType()), _id(AMateria::getId())
{
	cout << YELLOW"[" << getId() << "]===CURE copy to new Constructor==="DEF << endl;
	cout << "Material New Copy Type: " << getType() << "\n" << endl;
}

Cure & Cure::operator=(Cure const & rhs)
{
	if (this != &rhs)
		AMateria::t = rhs.getType();
	cout << YELLOW"[" << getId() << "]===CURE Copy Assignment===[" << rhs.getId()
		<< "]"DEF << endl;
	cout << "Material New Assigned Type: " << getType() << "\n" << endl;
	return (*this);
}

AMateria * Cure::clone() const
{
	cout << BYELLOW"\n>>>CURE New Clone<<<"DEF;
	AMateria *aclone = new Cure();

	return (aclone);
}

void	Cure::use(ICharacter & target)
{
	cout << GREEN"[Cure id:" << getId() << "]: * heals " << target.getName()
		<< "'s wounds *\n"DEF << endl;
}

int		Cure::getId(void) const
{
	return (this->_id);
}
