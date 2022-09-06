/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:26:12 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/06 11:34:35 by leng-chu         ###   ########.fr       */
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
	std::map<long, long> map, map3;
	std::transform(_span.begin(), _span.end(), std::inserter(map, map.end()), pairmap);
	try {
		if (this->_span.empty())
			throw static_cast<std::string>("Span is empty!");
		if (this->_span.size() == 1)
			throw static_cast<std::string>("Span has only one element!");
		std::map<long, long>::iterator itm = map.begin();
		std::map<long, long> map2(++itm, map.end());
		std::transform(map2.begin(), map2.end(), map.begin(), std::inserter(map3, map3.end()), submap);
	}
	catch (std::string x) {
		cout << "[shortestSpan]: " << x << endl;
		exit(1);
	}
	std::map<long, long>::iterator min = map3.begin();
	return (min->first);
}

long int Span::longestSpan()
{
	long result = 0;
	try {
		if (this->_span.empty())
			throw static_cast<std::string>("Span is empty!");
		if (this->_span.size() == 1)
			throw static_cast<std::string>("Span has only one element!");
		//for (a = _span.begin(); a != _span.end(); a++)
		//	for (b = a + 1; b != _span.end(); b++)
		//		mymap.insert(std::pair<long, long>(abs(static_cast<long>(*a) - static_cast<long>(*b)), 'a'));
		long min = *min_element(this->_span.begin(), this->_span.end());
		long max = *max_element(this->_span.begin(), this->_span.end());
		result = abs(max - min);
	}
	catch (std::string x) {
		cout << "[longestSpan]: " << x << endl;
		exit(1);
	}
	//std::map<long, long>::iterator it = mymap.end();
	//--it;
	return (result);
}

void	Span::fillSpan(int n)
{
	srand(time(0));
	(void)n;
}

std::pair<long, long> Span::pairmap(long x)
{
	return (std::make_pair(x, 1));
}

std::pair<long, long> Span::submap(std::pair<const long, long> & x, std::pair<const long, long> & y)
{
	return (std::make_pair(abs(x.first - y.first), 1));
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
