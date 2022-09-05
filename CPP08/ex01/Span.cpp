/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:26:12 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/05 16:16:20 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void): _N(0), _span(0) {}

Span::~Span(void) {}

Span::Span(Span const & src): _N(src.getInt()), _span(src.getVector())
{}

Span & Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		this->setInt(rhs.getInt());
		this->setVector(rhs.getVector());
	}
	return (*this);
}

Span::Span(unsigned int n): _N(n), _span(0)
{}

void	Span::setInt(unsigned int i)
{
	this->_N = i;
}

void	Span::setVector(vector<int> i)
{
	this->_span = i;
}

unsigned int Span::getInt(void) const
{
	return (this->_N);
}

vector<int> Span::getVector(void) const
{
	return (this->_span);
}

void	Span::addNumber(long int i)
{
	try
	{
		if (this->_N == 0)
			throw (1);
		this->_span.push_back(i);
		this->_N--;
	}
	catch (...)
	{
		cout << "Sorry the Span is full!" << endl;
	}
}

long int Span::shortestSpan()
{
	vector<int>::iterator a, b;
	std::map<long, long> mymap;
	try {
		if (this->_span.empty())
			throw static_cast<std::string>("Span is empty!");
		if (this->_span.size() == 1)
			throw static_cast<std::string>("Span has only one element!");
		for (a = _span.begin(); a != _span.end(); a++)
			for (b = a + 1; b != _span.end(); b++)
				mymap.insert(std::pair<long, long>(abs(static_cast<long>(*a) - static_cast<long>(*b)), 'a'));
	}
	catch (std::string x) {
		cout << "[shortestSpan]: " << x << endl;
		exit(1);
	}
	std::map<long, long>::iterator it = mymap.begin();
	return (it->first);
}

long int Span::longestSpan()
{
	vector<int>::iterator a, b;
	std::map<long, long> mymap;
	try {
		if (this->_span.empty())
			throw static_cast<std::string>("Span is empty!");
		if (this->_span.size() == 1)
			throw static_cast<std::string>("Span has only one element!");
		for (a = _span.begin(); a != _span.end(); a++)
			for (b = a + 1; b != _span.end(); b++)
				mymap.insert(std::pair<long, long>(abs(static_cast<long>(*a) - static_cast<long>(*b)), 'a'));
	}
	catch (std::string x) {
		cout << "[shortestSpan]: " << x << endl;
		exit(1);
	}
	std::map<long, long>::iterator it = mymap.end();
	--it;
	return (it->first);
}

void	Span::fillSpan(int n)
{
	srand(time(0));
	(void)n;
}

std::ostream & operator<<(std::ostream & o, Span const & rhs)
{
	vector<int> tmp = rhs.getVector();
	o << "Balance int: " << rhs.getInt() << endl;
	o << "Vector: ";
	for (vector<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
		o << *it << " ";
	o << endl;
	return (o);
}
