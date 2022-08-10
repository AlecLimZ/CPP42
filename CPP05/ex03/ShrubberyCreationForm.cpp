/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:02:27 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/10 14:23:08 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


// create a constrctor of base class is to init the base class's PRIVATE attribute
ShrubberyCreationForm::ShrubberyCreationForm(void):Form("ShrubberyCreationForm", 145, 137), _target("DefaultTarget")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

ShrubberyCreationForm::ShrubberyCreationForm(string target):Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):Form(src.getName(), src.getGsign(), src.getGexec()), _target(src.getTarget())
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	// copy target only make more sense for this class to my personal view 
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return (*this);
}

void	ShrubberyCreationForm::setTarget(string t)
{
	this->_target = t;
}

string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

std::ostream & ft_drawtree(int n, int w, int q, std::ostream & newFile)
{
	int p = 25;
	if (n)
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (j >= (p - (i + q)) && j <= (p + (i + q)))
					newFile << "*";
				else
					newFile << " ";
			}
			newFile << endl;
		}
		ft_drawtree(n - 1, w + 2, q + 5, newFile);
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (j >= (p - 1) && j <= (p + 1))
					newFile << "|";
				else
					newFile << " ";
			}
			newFile << endl;
		}
	}
	return (newFile);
}

void	ShrubberyCreationForm::createfile(void) const
{
	cout << GRE << "[ShrubberyCreationForm]: successfully execute" << DEF << endl;
	std::ofstream newFile(getTarget() + "_shrubbery");

	ft_drawtree(3, 50, 0, newFile);
	newFile.close();
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned() && executor.getGrade() > 0 && executor.getGrade() <= getGexec())
		cout << YEL << "[ShrubberyCreationForm]: this form is not yet signed by "  << DEF << endl;
	else if (getSigned() && executor.getGrade() > 0 && executor.getGrade() <= getGexec())
		this->createfile();
	else
		cout << RED << "[ShrubberyCreationForm]: Sorry cannot execute, need at least " << getGexec() << DEF << endl;
}
