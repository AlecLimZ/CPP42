/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   materiasource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:12:11 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/04 13:06:51 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "materiasource.hpp"
#include "materia.hpp"

MateriaSource::MateriaSource(void)
{
	cout << YELLOW"MateriaSource New Construction[Default]\n"DEF << endl;
	for (int i = 0; i < 5; i++)
		store[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (store[i])
			delete store[i];
	cout << BRED"MateriaSource destructed\n"DEF << endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	cout << YELLOW"MateriaSource Copy Construction\n"DEF << endl;
	for (int i = 0; i < 5; i++)
		store[i] = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (src.store[i]->getType() == "ice")
			store[i] = new Ice();
		else if (src.store[i]->getType() == "cure")
			store[i] = new Cure();
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	cout << YELLOW"MateriaSource Copy Assignment\n"DEF << endl;
	for (int i = 0; i < 5; i++)
		store[i] = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (rhs.store[i]->getType() == "ice")
			store[i] = new Ice();
		else if (rhs.store[i]->getType() == "cure")
			store[i] = new Cure();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int i = -1;
	while (++i < 4)
	{
		if (store[i] == NULL)
		{
			store[i] = m;
			break ;
		}
	}
	if (i == 4)
	{
		cout << "MateriaSource's store is full!\n" << endl;
		delete m;
	}
	else
		cout << "MateriaSource successfully learn the material " << store[i]->getType()
			<< " [id:" << store[i]->getId() << "]\n" << endl;
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	AMateria *tmp = NULL;

	int i = -1;
	while (++i < 4)
	{
		if (store[i] && store[i]->getType() == type)
		{
			if (type == "ice")
			{
				cout << BCYAN"Found ice in the materia store to create\n"DEF << endl;
				tmp = new Ice();
			}
			else if (type == "cure")
			{
				cout << BCYAN"Found cure in the materia store to create\n"DEF << endl;
				tmp = new Cure();
			}
			break ;
		}
	}
	if (i == 4)
	{
		cout << RED"Type is unknown\n"DEF << endl;
		return (0);
	}
	return (tmp);
}
