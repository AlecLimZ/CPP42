/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:12:52 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/03 19:09:42 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "materia.hpp"

void	ft_ice(void)
{
	AMateria *a = new Ice();
	AMateria *b = a->clone(); // make a new clone of ice
	// to me, the clone is pretty much same as deep copy.
	cout << b->getType() << endl;
	Ice c;
	Ice d(c);

	c = d;
	delete a;
	delete b;
	cout << d.getType() << endl;
}
	
void	ft_cure(void)
{
	AMateria *a = new Cure();
	AMateria *b = a->clone(); // make a new clone of ice
	// to me, the clone is pretty much same as deep copy.
	cout << b->getType() << endl;
	Cure c;
	Cure d(c);

	c = d;
	delete a;
	delete b;
	cout << d.getType() << endl;
}

void	ft_char(void)
{
	Character jack("Jack");
	Character copy("Copy");
	AMateria *a = new Ice();
	jack.equip(a);
	copy = jack;
	copy.use(0, jack);
	Character copy2 = jack;
	copy2.use(0, jack);
//	copy.unequip(0);
}

void	ft_imc(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

int	main(void)
{
	//ft_ice();
	//ft_cure();
//	ft_char();
	ft_imc();
	system("leaks interface");
	return (0);
}
