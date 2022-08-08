/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:21:33 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/08 18:35:03 by leng-chu         ###   ########.fr       */
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
	Form a;
	cout << a << endl;
	Form b("FormB", -100, 100);
	cout << b << endl;
	Form c("FormC", 100, 200);
	cout << c << endl;
	cout << YEL"\n===Copy Constructor==="DEF << endl;
	Form d = Form("FormD", -100, 200);
	cout << d << endl;
	cout << YEL"\n===Copy Assignment==="DEF << endl;
	a = d;
}

void	ft_testf_b(void)
{
	Bureaucrat a("JackA", 190);
	Bureaucrat b("JackB", 1);
	cout << a << b << endl;

	Form t("RankingForm", 1, 150);
	cout << t << endl;

	t.beSigned(a); // should cannot sign
	cout << t << endl;

	t.beSigned(b); // should success sign
	cout << t << endl;

	Form t2("WrongForm", -100, 140);
	cout << t2 << endl;
	// should not able to sign even b's grade is between 1~150 as the form's grade requirement itself is out of bound.
	t2.beSigned(b);
}

int main(void)
{
//	ft_testform();
	ft_testf_b();
	return (0);
}
