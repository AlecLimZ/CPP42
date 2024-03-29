/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:26:09 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/18 12:38:59 by leng-chu         ###   ########.fr       */
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
		stold();
		if (!is_number(getInput()))
			throw (1);
		if (getType() < 32 || getType() > 126 || getType() > trunc(getType()))
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
		if (!is_number(getInput()))
			throw (1);
		if (getType() < std::numeric_limits<int>::min()
			|| getType() > std::numeric_limits<int>::max() || isnan(getType()))
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
		if (!is_number(getInput()) && check_inf() == "")
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

Conversion::operator double(void)
{
	double tmp = 0;
	cout << "double: ";
	try
	{
		if (!is_number(getInput()) && check_inf() == "")
			throw 1;
		tmp = static_cast<double>(getType());
		cout << std::fixed << std::setprecision(1) << tmp << endl;
	}
	catch (...)
	{
		cout << "nan" << endl;
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
		double d = *this;
		if (!a || !b || !c || !d) // for fun only haha
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

string	Conversion::check_inf(void)
{
	string tmp = getInput();
	if (tmp == "inff" || tmp == "+inff" || tmp == "-inff"
		|| tmp == "inf" || tmp == "+inf" || tmp == "-inf")
		return (tmp);
	return "";
}

bool Conversion::is_number(const std::string & s)
{
	int dot = 0;
	int e = 0;
	int i = 0;
	int f = 0;
	int len = s.length();
	if (s[0] == '-' || s[0] == '+')
		i++;
	if (s[len - 1] == 'f')
		len--;

	while (i < len)
	{
		if (!isdigit(s[i]) && s[i] != '.' && s[i] != 'f')
			e++;
		if (s[i] == '.')
			dot++;
		if (s[i] == 'f')
			f++;
		i++;
	}
	if (s[s.length() - 1] == 'f')
		len = s.length() - 2;
	else
		len = s.length() - 1;
	if (!(s[0] != '.' && s[len] != '.' && dot <= 1 && e == 0 && f == 0))
		return (0);
	return (1);
}
