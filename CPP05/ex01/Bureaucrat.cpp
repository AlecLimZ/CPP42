/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:24:53 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/08 13:36:15 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Default"), _grade(150)
{}

Bureaucrat::~Bureaucrat(void){}

Bureaucrat::Bureaucrat(std::string const n, int const g): _name(n), _grade(g)
{
	if (error_handling())
		setGrade(150);
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src.getName()), _grade(src.getGrade())
{
	//Personally i see there is no way to trigger the throwing here
	//but still add this just in case anything possible
	//but i doubt i will find te possible to trigger the throwing
	if (error_handling())
		setGrade(150);
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
		_grade = rhs.getGrade();

	//but my personal opinon is same as above in the copy constructor
	if (error_handling())
		setGrade(150);
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
	return ("[Bureaucrat::GradeTooHighException]: Grade is too high. 150 is given only if this object is new created. Please input 1 ~ 150");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("[Bureaucrat::GradeTooLowException]: Grade is too low. 150 is given only if this object is new created. Please input 1 - 150");
}

int	Bureaucrat::error_handling(void)
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
	if (error_handling())
		this->_grade++;
	return (*this);
}

Bureaucrat & Bureaucrat::operator++(void)
{
	this->_grade--;
	if (error_handling())
		this->_grade++;
	return (*this);
}

Bureaucrat & Bureaucrat::operator--(int)
{
	this->_grade++;
	 if (error_handling())
		 this->_grade--;
	return (*this);
}

Bureaucrat & Bureaucrat::operator--(void)
{
	this->_grade++;
	if (error_handling())
		this->_grade--;
	return (*this);
}
