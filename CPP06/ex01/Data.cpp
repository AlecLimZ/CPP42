/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:15:07 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/18 14:06:22 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data2::Data2(void): _name("Data2"), _age(77), _weight(85.7){}

Data2::~Data2(void){}

Data2::Data2(Data2 const & src)
:_name(src.getName()), _age(src.getAge()), _weight(src.getWeight()){}

Data2 & Data2::operator=(Data2 const & rhs)
{
	if (this != &rhs)
	{
		setName(rhs.getName());
		setAge(rhs.getAge());
		setWeight(rhs.getWeight());
	}
	return (*this);
}

Data2::Data2(string n, int a, float w)
:_name(n), _age(a), _weight(w){}

string Data2::getName(void) const
{
	return (this->_name);
}

int	Data2::getAge(void) const
{
	return (this->_age);
}

float Data2::getWeight(void) const
{
	return (this->_weight);
}

void	Data2::setName(string n)
{
	this->_name = n;
}

void	Data2::setAge(int a)
{
	this->_age = a;
}

void	Data2::setWeight(float w)
{
	this->_weight = w;
}

std::ostream & operator<<(std::ostream & o, Data2 const & rhs)
{
	o << YLW"===DATA(Object)===\n";
	o << "name: " << rhs.getName() << endl;
	o << "age: " << rhs.getAge() << endl;
	o << "weight: " << std::fixed << std::setprecision(1) << rhs.getWeight() << endl;
	o << DEF;
	return o;
}

std::ostream & operator<<(std::ostream & o, Data const & rhs)
{
	o << YLW"===DATA(Struct)===\n";
	o << "name: " << rhs.name << endl;
	o << "age: " << rhs.age << endl;
	o << "weight: " << std::fixed << std::setprecision(1) << rhs.weight << endl;
	o << DEF;
	return o;
}
