/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:38:54 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/01 16:49:16 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

int main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;



	const WrongAnimal *wmeta = new WrongAnimal();
	const WrongAnimal *wi = new WrongCat();

	std::cout << wi->getType() << " " << std::endl;
	wi->makeSound();
	wmeta->makeSound();
	delete wmeta;
	delete wi;

	const Cat *z = new Cat();
	const Dog *x = new Dog();

	std::cout << z->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;
	z->makeSound();
	x->makeSound();
	delete z;
	delete x;

	Animal ca = Cat();
	Animal da = Dog();
	std::cout << "ca: " << ca.getType() << std::endl;
	std::cout << "da: " << da.getType() << std::endl;
	Cat copy;
	Animal test;
	std::cout << "cat copy: " << copy.getType() << std::endl;
	std::cout << "animal test: " << test.getType() << std::endl;
	test = copy;
	std::cout << "cat copy: " << copy.getType() << std::endl;
	std::cout << "animal test: " << test.getType() << std::endl;
	std::cout << BMAG"======AFTER END OF MAIN SCOPE(this print before \"return (0)\")======="DEF << std::endl;
	return (0);
}
