/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:12:52 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/05 13:05:31 by leng-chu         ###   ########.fr       */
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
	Character *jack = new Character("Jack");
	Character *copy = new Character("Copy");
	AMateria *a = new Ice();
	AMateria *b = new Cure();
	AMateria *c = new Cure();
	AMateria *d = new Cure();
	AMateria *e = new Cure();
	jack->equip(a);
	jack->equip(b);
	jack->equip(b);
	jack->equip(c);
	jack->equip(d);
	jack->equip(e);
	jack->unequip(1);
	jack->unequip(1);
	copy->use(0, *jack);
	*copy = *jack;
	copy->use(0, *jack);
	delete copy;
	Character *copy2 = new Character();
	*copy2 = *jack;
	copy2->use(0, *jack);
	delete jack;
	delete copy2;
	delete b;
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

void	ft_ms(void)
{
	MateriaSource *AAA = new MateriaSource();
	AAA->learnMateria(new Ice());
	AAA->learnMateria(new Cure());
	AAA->learnMateria(new Cure());
	AAA->learnMateria(new Ice());
	AAA->learnMateria(new Ice());
	MateriaSource *BBB = new MateriaSource();
	ICharacter *Naruto = new Character("Naruto");
	ICharacter *Sasuke = new Character("Sasuke");
	AMateria* tmp;
	tmp = AAA->createMateria("ice"); // found ice as AAA has "ice" stored
	Naruto->equip(tmp);
	Sasuke->equip(tmp); 
	tmp = BBB->createMateria("ice"); // unknown type as BBB dont has "ice"
	Naruto->equip(tmp);
	*BBB = *AAA;
	delete AAA;
	tmp = BBB->createMateria("cure");
	Naruto->equip(tmp);
	Naruto->use(0, *Sasuke);
	delete BBB;
	delete Naruto;
	delete Sasuke;
}

int	main(void)
{
//	ft_imc();
//	ft_ice();
//	ft_cure();
	ft_char();
//	ft_ms();
	return (0);
}
