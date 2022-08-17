/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:26:09 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/17 18:16:14 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(void): _input(0), _type(0)
{}

Conversion::~Conversion(void){}

Conversion::Conversion(Conversion const & src): _input(src.getInput())
{}

Conversion & Conversion::operator=(Conversion const & rhs)
{
	if (this != &rhs)
		setInput(rhs.getInput());
	return (*this);
}

Conversion::Conversion(char *s):_input(s), _type(0)
{
	stold();
	this->display();	
}

string Conversion::getInput(void) const
{
	return (this->_input);
}

void	Conversion::setInput(string n)
{
	this->_input = n;
}

long double Conversion::getType(void) const
{
	return (this->_type);
}

void	Conversion::setType(long double n)
{
	this->_type = n;
}

Conversion::operator char(void)
{
	char c = '\0';
	cout << "char: ";
	try
	{
		if (!is_number(getInput()))
			throw (1);
		if (getType() < 1 || getType() > 126)
			throw (string)"Non displayable";
		c = static_cast<char>(getType());
		if (!c)
			throw (1);
		cout << c << endl;
	}
	catch (string e)
	{
		cout << e << endl;
	}
	catch (...)
	{
		cout << "impossible" << endl;
	}
	return (c);
}

Conversion::operator int(void)
{
	int tmp = 0;
	cout << "int: ";
	try
	{
		// this is not neccesary but i add this so that each list shows
		// impossible for fun :D
	//	stoi(getInput());
		if (!is_number(getInput()))
			throw (1);
		if (getType() < std::numeric_limits<int>::min()
			|| getType() > std::numeric_limits<int>::max())
			throw (1);
		tmp = static_cast<int>(getType());
		cout << tmp << endl;
	}
	catch (...)
	{
		cout << "impossible" << endl;
	}
	return (tmp);
}

Conversion::operator float(void)
{
	float tmp = 0;
	cout << "float: ";
	try
	{
		if (!is_number(getInput()))
			throw 1;
		tmp = static_cast<float>(getType());
		cout << std::fixed << std::setprecision(1) << tmp << "f\n";
	}
	catch (...)
	{
		cout << "nanf" << endl;
	}
	return (tmp);
}

int	Conversion::display(void)
{
	int ret = 0;
	try
	{
		char a = *this;
		int b = *this;
		float c = *this;
		if (!a || !b || !c)
			throw (1);
	}
	catch (int ret)
	{
		return (ret);
	}
	return (ret);
}

void	Conversion::stold(void)
{
	try
	{
		setType(std::stold(getInput()));
	}
	catch (std::exception & e)
	{
		(void)e;
	}
}
