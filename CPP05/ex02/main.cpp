/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:21:33 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/11 14:18:21 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

	a.executeForm(*f2);
	b.executeForm(*f1);

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

void	ft_president(void)
{
	Bureaucrat a("JackA", 150);
	Bureaucrat b("JackB", 3);
	Bureaucrat c("JackC", 20);
	Form	*f1 = new PresidentialPardonForm("TargetA");
	Form	*f2 = new PresidentialPardonForm("TargetB");
	cout << *f1 << endl;
	cout << *f2 << endl;
	f1->execute(a);
	f1->execute(b);
	f1->execute(c);

	a.executeForm(*f2);
	b.executeForm(*f1);
	
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
	ft_shrub();
	ft_block();
	ft_robo();
	ft_block();
	ft_president();
	ft_block();
	return (0);
}
