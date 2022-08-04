/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:38:54 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/04 14:12:59 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

void	ft_block(void)
{
	int b = 70;
	for (int i = 0; i < b; i++)
	{
		std::cout << "[]";
		if (i == b / 2 - 1)
			std::cout << "\n";
	}
	std::cout << "\n" << std::endl;
}

void	ft_100(void)
{
	ft_block();
	Animal *a[20];
	ft_block();
	int num = 20;
	for (int i = 0; i < num; i++)
	{
		if (i < num / 2)
			a[i] = new Dog();
		else
			a[i] = new Cat();
	}
	ft_block();
	for (int i = 0; i < num; i++)
	{
		std::cout << i + 1 << ": "; a[i]->makeSound();
	}
	ft_block();
	for (int i = 0; i < num; i++)
		delete a[i]; // delete as Animals
	ft_block();
}

void	ft_start(void)
{
	ft_block();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	ft_block();
	delete j;
	delete i;
	ft_block();
}

void	test_copy(void)
{
	ft_block();
	Cat a, b;
	a.giveBrain("kucing");
	b.giveBrain("popcorn");
	a.showBrain();
	b.showBrain();
	std::cout << a << b << std::endl;
	a = b;
	a.showBrain();
	b.showBrain();
	std::cout << a << b << std::endl;
	Cat c = a;
	c.showBrain();
	std::cout << a << b << c << std::endl;
	ft_block();
}

int main(void)
{
	ft_start();
//	ft_100();
//	test_copy();
	return (0);
}
