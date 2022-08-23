/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:06:44 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/23 18:03:41 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>

using std::cout;
using std::endl;
using std::string;

template <typename T>
class Array
{
	T *_array;
	unsigned int _len;
	public:
		// conanical form
		Array(void);
		~Array(void);
		Array(Array<T> const & src); // copy constructor
		Array<T> & operator=(Array<T> const & rhs); // copy assignment

		// construction with unsigned int n parameter
		Array(unsigned int const n);

		//getter
		T *getArray(void) const;
		unsigned int size() const;

		//subscript operator[]
		T & operator[](unsigned int const index); // can modify by outside
		T const & operator[](unsigned const index) const; // cannot be modify by outside
};

template <typename T>
Array<T>::Array(void): _array(NULL), _len(0)
{
	cout << "Constructor(No parameter) Array called" << endl;
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] this->_array;
}

template <typename T>
Array<T>::Array(Array<T> const & src)
{
	cout << "Copy Constructor Array called" << endl;
	this->_len = src.size();
	if (_len < 1)
		this->_array = NULL;
	else
	{
		this->_array = new T[_len];
		for (unsigned int i = 0; i < _len; i++)
			this->_array[i] = src.getArray()[i];
	}
}

template <typename T>
Array<T> & Array<T>::operator=(Array<T> const & rhs)
{
	cout << "Copy Assignment Array called" << endl;
	if (this != &rhs)
	{
		if (this->_len > 0)
			delete [] this->_array;
		this->_len = rhs.size();
		if (this->_len < 1)
			this->_array = NULL;
		else
		{
			this->_array = new T[_len];
			for (unsigned int i = 0; i < _len; i++)
				this->_array[i] = rhs.getArray()[i];
		}
	}
	return (*this);
}

template <typename T>
Array<T>::Array(unsigned int const n): _len(n)
{
	cout << "Constructor(Parameter) Array called" << endl;
	if (_len < 1)
		this->_array = NULL;
	else
	{
		this->_array = new T[_len];
		for (unsigned int i = 0; i < _len; i++)
			this->_array[i] = 0;
	}
}

template <> // full template specializaton for string
Array<string>::Array(unsigned int const n): _len(n)
{
	cout << "Constructor(Parameter) Array called" << endl;
	if (_len < 1)
		this->_array = NULL;
	else
	{
		this->_array = new string[_len];
		for (unsigned int i = 0; i < _len; i++)
			this->_array[i] = "";
	}
}

template <typename T>
T *Array<T>::getArray(void) const
{
	return (this->_array);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_len);
}

template <typename T>
T & Array<T>::operator[](unsigned int index)
{
	if (index >= this->_len || index < 0)
		throw std::range_error("Index is out of bound from non-const operator[]");
	return (this->_array[index]);
}

template <typename T>
T const & Array<T>::operator[](unsigned const index) const
{
	if (index >= this->_len || index < 0)
		throw std::range_error("Index is out of bound from const operator[]");
	return (this->_array[index]);
}

template <typename T>
std::ostream & operator<<(std::ostream & o, Array<T> const & rhs) // this is const instance
{
	if (rhs.size() < 1)
		o << "This is empty Array!" << endl;
	for (size_t i = 0; i < rhs.size(); i++)
		o << "Array[" << i << "]: " << rhs[i] << endl; // it will call const operator[] for reading only

	/*
	 * try catch below just to trigger the error in the const operator[]
	 * */
	try
	{
		for (size_t i = 0; i < rhs.size() + 42; i++)
			rhs[i];
	}
	catch (std::exception & e)
	{
		cout << e.what() << endl;
	}
	return (o);
}

// Array<bool> will call this
std::ostream & operator<<(std::ostream & o, Array<bool> const & rhs)
{
	if (rhs.size() < 1)
		o << "This is empty Array!" << endl;
	for (size_t i = 0; i < rhs.size(); i++)
		o << "Array[" << i << "]: " << std::boolalpha << rhs[i] << endl;
	try
	{
		for (size_t i = 0; i < rhs.size() + 42; i++)
			rhs[i];
	}
	catch (std::exception & e)
	{
		cout << e.what() << endl;
	}
	return (o);
}
#endif
