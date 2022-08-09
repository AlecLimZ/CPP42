/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:21:33 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/09 19:23:57 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

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
	Form *a = new ShrubberyCreationForm();
	Bureaucrat b("Jack", 137);
	cout << b << endl;
	b.signForm(*a);
	a->beSigned(b);
	b.signForm(*a);
	return (0);
}
