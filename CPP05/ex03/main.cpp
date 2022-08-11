/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:21:33 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/11 14:39:05 by leng-chu         ###   ########.fr       */
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

void	ft_test1(Form *f1, Form *f2)
{
	Bureaucrat a("JackA", 150);
	Bureaucrat b("JackB", 14);
	Bureaucrat c("JackC", 145);
	cout << *f1 << endl;
	cout << *f2 << endl;
	f1->execute(a); // 150 is too low to execute
	f1->execute(b); // can execute but cannot yet due to the form is not sign yet
	f1->execute(c); // 145 is too low to execute

	a.executeForm(*f2); // cannot execute
	b.executeForm(*f1); // cannot coz not yet signed

	f1->beSigned(a); // reject JackA
	f1->beSigned(b); // accept JackB's grade to sign
	f2->beSigned(c); // accept JackC's grade to sign
	cout << *f1 << endl;
	cout << *f2 << endl;
	f1->execute(b);  // success create a file with ASCII tree drawing
	f2->execute(c); // cannot execute coz execute grade at least 137 even JackC's 145 can sign
	cout << YEL << "\n===Check Bureaucrat's signForm===" << DEF << endl;
	a.signForm(*f1);
	a.signForm(*f2);
	b.signForm(*f1);
	c.signForm(*f2);

	cout << YEL << "\n===Check Bureaucrat's executeForm===" << DEF << endl;
	a.executeForm(*f1);
	a.executeForm(*f2);
	b.executeForm(*f1);
	c.executeForm(*f2);
	delete f1;
	delete f2;
}

void	ft_test2(Form *f1, Form *f2)
{
	Bureaucrat a("JackA", 150);
	Bureaucrat b("JackB", 20);
	Bureaucrat c("JackC", 70);
	cout << *f1 << endl;
	cout << *f2 << endl;
	f1->execute(a);
	f1->execute(b);
	f1->execute(c);
	
	a.executeForm(*f2); // cannot execute
	b.executeForm(*f1); // cannot coz not yet signed
	
	f1->beSigned(a);
	f1->beSigned(b); // accept JackB's grade
	f2->beSigned(c); // accept JackC's grade
	cout << *f1 << endl;
	cout << *f2 << endl;
	f1->execute(b); // can execute at 50% success rate for the robo class.
	f2->execute(c); // cannot execute coz execute grade at least 45
	
	cout << YEL << "\n===Check Bureaucrat's signForm===" << DEF << endl;
	a.signForm(*f1);
	a.signForm(*f2);
	b.signForm(*f1);
	c.signForm(*f2);

	cout << YEL << "\n===Check Bureaucrat's executeForm===" << DEF << endl;
	a.executeForm(*f1);
	a.executeForm(*f2);
	b.executeForm(*f1);
	c.executeForm(*f2);
	delete f1;
	delete f2;
}

void	ft_test3(Form *f1, Form *f2)
{
	Bureaucrat a("JackA", 150);
	Bureaucrat b("JackB", 3);
	Bureaucrat c("JackC", 20);
	cout << *f1 << endl;
	cout << *f2 << endl;
	f1->execute(a);
	f1->execute(b);
	f1->execute(c);
	
	a.executeForm(*f2); // cannot execute
	b.executeForm(*f1); // cannot coz not yet signed
	
	f1->beSigned(a);
	f1->beSigned(b); // accept JackB's grade
	f2->beSigned(c); // accept JackC's grade
	cout << *f1 << endl;
	cout << *f2 << endl;
	f1->execute(b); // JackB can execute
	f2->execute(c); // cannot execute coz execute grade at least 5
	
	cout << YEL << "\n===Check Bureaucrat's signForm===" << DEF << endl;
	a.signForm(*f1);
	a.signForm(*f2);
	b.signForm(*f1);
	c.signForm(*f2);

	cout << YEL << "\n===Check Bureaucrat's executeForm===" << DEF << endl;
	a.executeForm(*f1);
	a.executeForm(*f2);
	b.executeForm(*f1);
	c.executeForm(*f2);
	delete f1;
	delete f2;
}

int main(void)
{
	ft_block();
	Intern someRandomIntern;
	Form *rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	cout << *rrf << endl;
	
	Form *rrf2 = someRandomIntern.makeForm("robotomy request", "2Bender2");
	cout << *rrf2 << endl;
	ft_test2(rrf, rrf2);
	
	ft_block();
	
	rrf = someRandomIntern.makeForm("shrubbery creation", "XhrubBender1");
	rrf2 = someRandomIntern.makeForm("shrubbery creation", "XhrubBender2");
	ft_test1(rrf, rrf2);
	
	ft_block();
	
	rrf = someRandomIntern.makeForm("presidential pardon", "PlolBender1");
	rrf2 = someRandomIntern.makeForm("presidential pardon", "PlolBender2");
	ft_test3(rrf, rrf2);
	
	ft_block();

	//check if form is not existing
	rrf = someRandomIntern.makeForm("42kl", "PlolBender1");
	rrf2 = someRandomIntern.makeForm("sadfsfdsf", "PlolBender2");
	if (!rrf)
		cout << "rrf is pointing to NULL" << endl;
	if (!rrf2)
		cout << "rrf2 is pointing to NULL" << endl;
	
	ft_block();
	return (0);
}
