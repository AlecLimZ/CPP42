/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:42:04 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/28 15:45:33 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class X
{
	public:
		int a;
		void f(int b)
		{
			std::cout << "The value of b is " << b << std::endl;
		}
};

int main(void)
{
	int X::*ptr2data = &X::a;

	void (X::*ptr2function)(int) = &X::f;

	X xobject;

	xobject.*ptr2data = 10;

	std::cout << "The value of a is " << xobject.a << std::endl;

	(xobject.*ptr2function)(20);
}
