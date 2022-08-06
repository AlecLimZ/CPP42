/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:24:53 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/06 17:53:11 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Default"), _grade(1)
{
	error_handling();
}

Bureaucrat::~Bureaucrat(void){}

Bureaucrat::Bureaucrat(std::string const n, int const g): _name(n), _grade(g)
{
	error_handling();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src.getName()), _grade(src.getGrade())
{
	error_handling();
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
		_grade = rhs.getGrade();
	error_handling();
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
	o << CYAN << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << DEF;
	return (o);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("[Bureaucrat::GradeTooHighException]: Grade is too high. Please input 1 ~ 150");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("[Bureaucrat::GradeTooLowException]: Grade is too low. Please input 1 - 150");
}

void	Bureaucrat::error_handling(void)
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
	}
}

Bureaucrat & Bureaucrat::operator++(int)
{
	this->_grade--;
	error_handling();
	return (*this);
}

Bureaucrat & Bureaucrat::operator++(void)
{
	this->_grade--;
	error_handling();
	return (*this);
}

Bureaucrat & Bureaucrat::operator--(int)
{
	this->_grade++;
	error_handling();
	return (*this);
}

Bureaucrat & Bureaucrat::operator--(void)
{
	this->_grade++;
	error_handling();
	return (*this);
}
