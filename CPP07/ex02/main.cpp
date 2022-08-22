/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:07:23 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/22 18:01:13 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void test(void)
{
	try
	{
		Array<int> b(2);
		for (int i = 0; i < 2; i++)
			b[i] = i + 2;
		for (int i = 0; i < 3; i++)
			cout << "b[" << i << "]: " << b[i] << endl;
	}
	catch (std::exception & e)
	{
		cout << e.what() << endl;
	}
}

int main(void)
{
	test();
//	system("leaks main");
	return (0);
}
