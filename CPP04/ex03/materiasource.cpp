/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   materiasource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:12:11 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/03 19:10:40 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "materiasource.hpp"
#include "materia.hpp"

MateriaSource::MateriaSource(void)
{
	cout << YELLOW"MateriaSource destructed\n"DEF << endl;
	for (int i = 0; i < 5; i++)
		store[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	cout << BRED"MateriaSource destructed\n"DEF << endl;
	for (int i = 0; i < 4; i++)
		if (store[i])
			delete store[i];
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
		cout << "MateriaSource's store is full!\n: << endl";
	else
		cout << "MateriaSource successfully store a material " << store[i]->getType()
			<< " [id:" << store[i]->getId() << "]\n" << endl;
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	AMateria *tmp = NULL;

	int i = -1;
	while (++i < 4)
	{
		if (store[i]->getType() == type)
		{
			if (type == "ice")
			{
				cout << BCYAN"Found ice in the materia store to learn/equip\n"DEF << endl;
				tmp = new Ice();
			}
			else if (type == "cure")
			{
				cout << BCYAN"Found cure in the materia store to learn/equip\n"DEF << endl;
				tmp = new Cure();
			}
			break ;
		}
	}
	if (i == 4)
	{
		cout << "Type is unknown\n" << endl;
		return (0);
	}
	return (tmp);
}
