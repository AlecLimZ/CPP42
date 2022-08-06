/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:21:33 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/06 18:00:01 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	ft_block(void)
{
	int b = 30;
	cout << endl;
	for (int i = 0; i < b; i++)
	{
		if (i == b / 2)
			cout << endl;
		cout << "[]";
	}
	cout << "\n" << endl;
}

int main(void)
{
	cout << YEL"\n===Throw when grade is lower than 150th or higher than 1st==="DEF << endl;
	Bureaucrat a("Jack", 299); // create new object a
	cout << a << endl;
	cout << endl;
	Bureaucrat b("JackB", -3); // create new object b
	cout << b << endl;

	ft_block();

	cout << YEL"===Copy Assignment==="DEF << endl;
	a = b; // copy assignment
	cout << a << endl;
	cout << b << endl;
	
	ft_block();
	
	cout << YEL"===Operation increment & decrement==="DEF << endl;
	Bureaucrat c("JackC", 150); // create new object c
	cout << c << endl; // no throw
	c--; // postfix decrement
	cout << c << endl; // throw
	++c; // prefix increment
	cout << c << endl; // no throw
	
	cout << endl;

	Bureaucrat d("JackD", 1);
	cout << d << endl; // no throw
	d++; // postfix increment
	cout << d << endl; // throw
	--d; // prefix decrement
	cout << d << endl; // no throw
	
	ft_block();
	
	cout << YEL"===Copy Constructor==="DEF << endl;
	Bureaucrat e(a); // copy constructor
	cout << "Object e status after copy object a:\n" <<  e << endl;
}
