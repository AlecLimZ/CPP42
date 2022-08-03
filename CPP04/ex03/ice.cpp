/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 09:28:09 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/03 16:26:07 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "materia.hpp"

Ice::Ice(void):AMateria("ice"), _id(AMateria::getId())
{
	cout << YELLOW"[" << getId() << "]===ICE new Constructor[Default]==="DEF << endl;
	cout << "Material New Type: " << getType() << "\n" << endl;
}

Ice::~Ice(void)
{
	cout << BRED"[" << getId() << "]===ICE Destructor==="DEF << endl;
	cout << "Type: " << getType() << endl;
}

Ice::Ice(Ice const & src):AMateria(src.getType()), _id(AMateria::getId())
{
	cout << YELLOW"[" << getId() << "]===ICE copy to new Constructor==="DEF << endl;
	cout << "Material New Copy Type: " << getType() << "\n" << endl;
}

Ice & Ice::operator=(Ice const & rhs)
{
	cout << YELLOW"[" << getId() << "]===ICE Copy Assignment===[" << rhs.getId()
		<< "]"DEF << endl;
	if (this != &rhs)
		AMateria::t = rhs.getType();
	cout << "Material New Assigned Type: " << getType() << "\n" << endl;
	return (*this);
}

AMateria * Ice::clone() const
{
	cout << BYELLOW"\n>>>ICE New Clone<<<"DEF;
	AMateria *aclone = new Ice();

	return (aclone);
}

void	Ice::use(ICharacter & target)
{
	cout << CYAN"[Ice id:" << getId() << "]: * shoots an ice bolt at " << target.getName() << " *\n"DEF << endl;
}

int		Ice::getId(void) const
{
	return (this->_id);
}

void	Ice::setId(int const i)
{
	this->_id = i;
}
