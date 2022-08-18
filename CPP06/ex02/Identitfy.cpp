/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identitfy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:04:46 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/18 15:49:30 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identitfy.hpp"

Base	*generate(void)
{
	int r = rand() % 3 + 1;
	Base *gen;
	r == 1 ? gen = new A() :
	r == 2 ? gen = new B() :
	r == 3 ? gen = new C() : gen = NULL;
	return (gen);
}

void identify(Base *p)
{
	cout << YLW"\n===Detect Object Pointer==="DEF << endl;
	if (!p)
	{
		cout << RED << "Error: The pointer is NULL" << DEF << endl;
		return ;
	}
	if (A *check = dynamic_cast<A*>(p))
		cout << BYLW << "I am actual type of object A"DEF << endl;
	if (B *check = dynamic_cast<B*>(p))
		cout << BYLW"I am actual type of object B"DEF << endl;
	if (C *check = dynamic_cast<C*>(p))
		cout << BYLW"I am actual type of object C"DEF << endl;
}

void identify(Base &p)
{
	cout << CYAN"\n===Detect Object Reference==="DEF << endl;
	try
	{
		try
		{
			A & check = dynamic_cast<A&>(p);
			cout << BCYAN << "I am actual type of object A\n" << DEF << endl;
			(void)check;
		}
		catch (std::exception & e)
		{
			cout << RED << e.what() << ":Sorry I am not A so.." << DEF << endl;
			B & check = dynamic_cast<B&>(p);
			cout << BCYAN << "I am actual type of object B\n" << DEF << endl;
			(void)check;
		}
	}
	catch (std::exception & e)
	{
		cout << RED << e.what() << ":Sorry I am not B so.." << DEF << endl;
		C & check = dynamic_cast<C&>(p);
		cout << BCYAN << "I am actual type of object C\n" << DEF << endl;
		(void)check;
	}
}
