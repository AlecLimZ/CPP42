/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:38:54 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/01 19:54:09 by leng-chu         ###   ########.fr       */
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
	Animal *a[10];
	int num = 10;
	for (int i = 0; i < num; i++)
	{
		if (i < num / 2)
			a[i] = new Dog();
		else
			a[i] = new Cat();
	}
	for (int i = 0; i < num; i++)
	{
		std::cout << i + 1 << ": "; a[i]->makeSound();
	}
	for (int i = 0; i < num; i++)
		delete a[i];
}

void	ft_start(void)
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	delete j;
	delete i;
}

void	test_copy(void)
{
	Cat a;
	Cat b;
	a.getBrain();
	b.getBrain();
	a = b;
	a.getBrain();
	b.getBrain();
}

int main(void)
{
//	ft_start();
//	ft_block();
//	ft_100();
//	ft_block();
	test_copy();
	system("leaks poly");
	return (0);
}
