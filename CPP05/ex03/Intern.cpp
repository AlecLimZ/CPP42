/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:55:08 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/10 19:56:11 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){}

Intern::~Intern(void){}

Intern::Intern(Intern const & src)
{
	(void)src;
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

Form * Intern::makeForm(string name, string target)
{
	Form *tmp;
	string n[] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	
	!name.compare(n[0]) ? tmp = new ShrubberyCreationForm(target) :
	!name.compare(n[1]) ? tmp = new RobotomyRequestForm(target) :
	!name.compare(n[2]) ? tmp = new PresidentialPardonForm(target) : tmp = NULL;
	
	!tmp ? cout << RED << "[Error] The form name doesn't exist" << DEF << endl :
			cout << GRE << "Intern creates " << tmp->getName() << DEF << endl;
	return (tmp);
}
