/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:21:33 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/10 19:50:36 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

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

void	ft_robo(void)
{
	Bureaucrat a("JackA", 150);
	Bureaucrat b("JackB", 20);
	Bureaucrat c("JackC", 70);
	Form	*f1 = new RobotomyRequestForm("TargetA");
	Form	*f2 = new RobotomyRequestForm("TargetB");
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

void	ft_test(Form *f1, Form *f2)
{
	Bureaucrat a("JackA", 150);
	Bureaucrat b("JackB", 3);
	Bureaucrat c("JackC", 20);
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

	Intern someRandomIntern;
//	Form *rrf;

//	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
//	cout << *rrf << endl;
	Form *rrf1 = someRandomIntern.makeForm("presidential pardon", "1Bender1");
	Form *rrf2 = someRandomIntern.makeForm("presidential pardon", "2Bender2");
	ft_test(rrf1, rrf2);
	return (0);
}
