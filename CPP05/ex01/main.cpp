/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:21:33 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/11 13:32:04 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

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

void	ft_testform(void)
{
	cout << YEL"\n===Constructors==="DEF << endl;
	Form a; // default
	cout << a << endl;
	Form b("FormB", -100, 100); // -100 is too high than 1, throw
	cout << b << endl;
	Form c("FormC", 100, 200); // 200 is too low than 150, throw
	cout << c << endl;
	cout << YEL"\n===Copy Constructor==="DEF << endl;
	Form d = Form("FormD", -100, 200); // The new D throw as -100 too high and 200 is too low
	cout << d << endl;
	cout << YEL"\n===Copy Assignment==="DEF << endl;
	a = d; // throw and prevent assignment the status of the signed.
	cout << a << endl;
}

void	ft_testf_b(void)
{
	Bureaucrat a("JackA", 190);
	Bureaucrat b("JackB", 1);
	cout << a << b << endl;

	Form t("RankingForm", 150, 150);
	cout << t << endl;

	t.beSigned(a); // should cannot sign
	cout << t << endl;

	t.beSigned(b); // should success sign
	cout << t << endl;

	Form t2("WrongForm", -100, 140);
	cout << t2 << endl;

	// should not able to sign even b's grade is between 1~150 as the form's grade requirement itself is out of bound.
	t2.beSigned(b);
	cout << t2 << endl;

	a.signForm(t);
	a.signForm(t2);
	b.signForm(t);
	b.signForm(t2);
}

int main(void)
{
	ft_block();
	ft_testform();
	ft_block();
	ft_testf_b();
	ft_block();
	return (0);
}
