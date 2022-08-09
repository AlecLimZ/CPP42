/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:21:33 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/09 20:12:53 by leng-chu         ###   ########.fr       */
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

void	ft_shrub(void)
{
	Bureaucrat a("JackA", 150);
	Bureaucrat b("JackB", 14);
	Bureaucrat c("JackC", 145);
	Form	*f1 = new ShrubberyCreationForm("TargetA");
	Form	*f2 = new ShrubberyCreationForm("TargetB");
	cout << *f1 << endl;
	cout << *f2 << endl;
	f1->execute(a);
	f1->execute(b);
	f1->execute(c);
	f1->beSigned(a);
	f1->beSigned(b); // accept JackB's grade
	f2->beSigned(c); // accept JackC's grade
	cout << *f1 << endl;
	cout << *f2 << endl;
	f1->execute(b); 
	f2->execute(c); // cannot execute coz execute grade at least 137
	delete f1;
	delete f2;
}

int main(void)
{
//	ft_block();
//	ft_shrub();
	return (0);
}
