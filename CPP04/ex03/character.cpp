/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:32:44 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/03 17:33:42 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.hpp"
#include "materia.hpp"

int	Character::index = 0;

Character::Character(void):_name("Default")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	cout << YELLOW << "Character new Constructor[Default]"DEF << endl;
	cout << "Character Name: " << this->getName() << "\n" << endl;
}

Character::~Character(void)
{
	cout << RED"Character " << this->getName() << " destructed\n"DEF << endl;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

Character::Character(std::string n):_name(n)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	cout << YELLOW << "Character new Constructor[Parameter]"DEF << endl;
	cout << "Character Name: " << this->getName() << "\n" << endl;
}

Character::Character(Character const & src):_name(src.getName())
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	for (int i = 0; i < 4; i++)
		if (src.inventory[i])
			inventory[i] = src.inventory[i]->clone();
	cout << YELLOW"Character new Copy Constructor"DEF << endl;
	cout << "Character Name: " << this->getName() << "\n" << endl;
}

Character & Character::operator=(Character const & rhs)
{
	cout << YELLOW"Character Copy Assignment"DEF << endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
			{
				delete inventory[i];
				inventory[i] = NULL;
			}
			if (rhs.inventory[i])
				inventory[i] = rhs.inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (!m)
		cout << *this << " Error, materia does not exist\n" << endl;
	else if (m->getIsUse())
		cout << *this << " Sorry, this materia is equipped by "
			<< m->getOwner() << "\n" << endl;
	else
	{
		int i = -1;
		while (++i < 4)
		{
			if (inventory[i] == NULL)
			{
				inventory[i] = m;
				m->setIsUse(1);
				m->setOwner(getName());
				break ;
			}
		}
		if (i == 4)
			cout << *this << " Your inventory is full!!!\n" << endl;
		else
			cout << *this << " Pick up the materia " << inventory[i]->getType() << "[id:" << inventory[i]->getId() << "] and successfully equips it to the inventory slot[" << i << "]\n" << endl;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 4)
		cout << *this << " Error slot[" << idx << "] does not exist\n" << endl;
	else if (!inventory[idx])
		cout << *this << " Inventory slot [" << idx << "] is already empty!\n" << endl;
	else
	{
		cout << *this << " Successfully unequip the slot[" << idx << "]: "
			<< inventory[idx]->getType() << "[id:" << inventory[idx]->getId()
			<< "]\n" << endl;
		inventory[idx]->setIsUse(0);
		inventory[idx]->setOwner("None");
		inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx >= 4)
		cout << *this << " Unable to use non-existing slot[" << idx << "] does not exist\n" << endl;
	else if (!inventory[idx])
		cout << *this << " No materia to use on [" << target.getName() << "], pls find a materia to equip before someone else!!\n" << endl;
	else
	{
		cout << *this << " " << getName() << "'s action as below:\n";
		this->inventory[idx]->use(target); //AMateria as inventorty is AMateria type
	}
}

std::ostream & operator<<(std::ostream & o, ICharacter const & rhs)
{
	o << BCYAN"[[" << rhs.getName() << " Notice]]"DEF;
	return (o);
}
