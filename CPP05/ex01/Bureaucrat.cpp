/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:24:53 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/11 13:47:52 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void): _name("Default"), _grade(150)
{}

Bureaucrat::~Bureaucrat(void){}

Bureaucrat::Bureaucrat(std::string const n, int const g): _name(n), _grade(g)
{
	exception_handling();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src.getName()), _grade(src.getGrade())
{
	if (exception_handling())
		_grade = 150;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (!rhs.exception_handling())
		if (this != &rhs)
			_grade = rhs.getGrade();
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::setGrade(int g)
{
	this->_grade = g;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << endl;
	o << CYAN << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << DEF;
	return (o);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("[Bureaucrat::GradeTooHighException]: Grade is too high than 1");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("[Bureaucrat::GradeTooLowException]: Grade is too low than 150");
}

int	Bureaucrat::exception_handling(void) const
{
	try
	{
		if (_grade < 1)
			throw (Bureaucrat::GradeTooHighException());
		else if (_grade > 150)
			throw (Bureaucrat::GradeTooLowException());
	}
	catch (std::exception & e)
	{
		cout << RED << e.what() << DEF << endl;
		return (1);
	}
	return (0);
}

Bureaucrat & Bureaucrat::operator++(int)
{
	this->_grade--;
	if (exception_handling())
		this->_grade++;
	return (*this);
}

Bureaucrat & Bureaucrat::operator++(void)
{
	this->_grade--;
	if (exception_handling())
		this->_grade++;
	return (*this);
}

Bureaucrat & Bureaucrat::operator--(int)
{
	this->_grade++;
	 if (exception_handling())
		 this->_grade--;
	return (*this);
}

Bureaucrat & Bureaucrat::operator--(void)
{
	this->_grade++;
	if (exception_handling())
		this->_grade--;
	return (*this);
}

void	Bureaucrat::signForm(Form const & f)
{
	if (f.getGsign() < 1 || f.getGsign() > 150 || f.getGexec() < 1 || f.getGexec() > 150)
		cout << RED << "[Bureaucrat::signForm]: " << this->getName() << " couldn't sign " << f.getName() << " because the form is out of bound between 1 ~ 150\n"DEF;
	else if (f.getSigned() && this->getGrade() >= 1 && this->getGrade() <= f.getGsign())
		cout << GRE << "[Bureaucrat::signForm]: " << this->getName() << " signed " << f.getName() << DEF << endl;
	else if (this->getGrade() >= 1 && this->getGrade() <= f.getGsign())
		cout << YEL << "[Bureaucrat::signForm]: " << this->getName() << " does not sign "
			<< f.getName() << " yet" << DEF << endl;
	else
		cout << RED << "[Bureaucrat::signForm]: " << this->getName() << " couldn't sign " << f.getName() << " because the grade is not in between 1 and " << f.getGsign() << "\n"DEF;
}

