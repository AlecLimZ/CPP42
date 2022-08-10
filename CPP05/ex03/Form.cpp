/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:50:32 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/09 19:28:41 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("★Grade-Form★"), _signed(false), _gsign(150), _gexec(150)
{}

Form::~Form(void){}

Form::Form(Form const & src): _name(src.getName()), _signed(src.getSigned()), _gsign(src.getGsign()), _gexec(src.getGexec())
{
	if (sign_handling(1))
		setSigned(false);
}

Form & Form::operator=(Form const & rhs)
{
	if (this != &rhs)
	{
		// set 1 as i want to check both grade to sign & grade to execute
		if (!sign_handling(1))
			this->_signed = rhs.getSigned();
	}
	return (*this);
}

Form::Form(string n, int a, int b): _name(n), _gsign(a), _gexec(b)
{
	sign_handling(1);
	setSigned(false);
}

string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int		Form::getGsign(void) const
{
	return (this->_gsign);
}

int		Form::getGexec(void) const
{
	return (this->_gexec);
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("[Form::GradeTooHighException]: Grade is too high");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("[Form::GradeTooLowException]: Grade is too low");
}

void	Form::beSigned(Bureaucrat const & bur)
{
	if (!this->sign_handling(bur.getGrade()))
		cout << GRE << "[Form::beSigned]: " << bur.getName()
			<< "'s grade is accepted to sign " << this->getName() << DEF << endl;
}

int	Form::sign_handling(int g)
{
	int ret = 0;
	try
	{
		try
		{
			try
			{
				if (_gsign < 1 || _gexec < 1)
					throw (Form::GradeTooHighException());
				if (_gsign > 150 || _gexec > 150)
					throw (Form::GradeTooLowException());
			}
			catch (std::exception & e)
			{
				if (_gsign < 1 || _gsign > 150)
				{
					cout << RED << "\n[Grade Required to sign]: " << e.what() << DEF << endl;
					if (_gexec < 1)
						throw (Form::GradeTooHighException());
					if (_gexec > 150)
						throw (Form::GradeTooLowException());
				}
				else
				{
					cout << RED << "\n[Grade Required to execute]: " << e.what() << DEF << endl;
					this->_signed = false;
				}
				ret = 1;
			}
		}
		catch (std::exception & e)
		{
				cout << RED << "[Grade Required to execute]: " << e.what() << DEF << endl;
				this->_signed = false;
				ret = 1;
		}
		if (ret == 0)
		{
			if (g < 1)
				throw (Form::GradeTooHighException());
			if (g > getGsign())
				throw (Form::GradeTooLowException());
			this->_signed = true;
		}
	}
	catch (std::exception & e)
	{
		cout << RED << endl << e.what() << DEF << endl;
		this->_signed = false;
		ret = 1;
	}
	return (ret);
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	o << CYAN << "\n===Form's Information===\n";
	o << "Form Name: " << rhs.getName() << endl;
	if (rhs.getSigned())
		o << "Is Signed: yes" << endl;
	else
		o << "Is Signed: nope" <<endl;
	o << "Grade to sign at least: " << rhs.getGsign() << " and above till 1" << endl;
	o << "Grade to execute at least: " << rhs.getGexec() << " and above till 1" << DEF << endl;
	return (o);
}

void	Form::setSigned(bool n)
{
	this->_signed = n;
}
