/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:21:33 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/08 11:50:15 by leng-chu         ###   ########.fr       */
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
	Bureaucrat a("Jack", 299); // create new object a, throw
	cout << a << endl;
	cout << endl;
	Bureaucrat b("JackB", -3); // create new object b, throw
	cout << b << endl;

	ft_block();

	cout << YEL"===Copy Assignment==="DEF << endl;
	/* copy assignment - should be not able to throw as both existing
	 * is alwiz between 1 ~ 150*/
	a = b;
	cout << a << endl;
	cout << b << endl;
	
	ft_block();
	
	cout << YEL"===Operation increment & decrement==="DEF << endl;
	Bureaucrat c("JackC", 150); // create new object c, no throw
	cout << c << endl;
	c--; // postfix decrement, throwing then prevent the decrement
	--c; // prefix decrement, throwing then prevent the decrement
	cout << c << endl;
	++c; // prefix increment - no throw
	c++; // postfix increment - no throw
	cout << c << endl; 
	
	cout << endl;

	Bureaucrat d("JackD", 1); // no throw
	cout << d << endl; 
	d++; // postfix increment - throw, prevent the increment
	++d; // prefix increment - throw, prevent the increment
	cout << d << endl;
	--d; // prefix decrement - no throw
	d--; // prefix decrement - no throw
	cout << d << endl;
	
	ft_block();
	
	cout << YEL"===Copy Constructor==="DEF << endl;
	Bureaucrat e(a); // copy constructor - no throw as it should be not able to throw
	cout << "Object e status after copy object a:\n" <<  e << endl;
}
