/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:56:04 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/08 18:26:44 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

// Surpisely this function is working as default constructor as well.
template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(Container const & cont): C(cont)
{}

// According to stack container's destructor descriptor, even if there is a pointer,
// no need to destroy those pointers in the stack.
template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack(void)
{}

// Copy constructor
template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(MutantStack const & src): C(src.C)
{}

// Copy assignment
template <typename T, typename Container>
MutantStack<T, Container> & MutantStack<T, Container>::operator=(MutantStack const & rhs)
{
	if (this != &rhs)
		this->C = rhs.C;
	return (*this);
}

// Give the value of the top element
// have to typename as this file wont know what is reference without accessing
template <typename T, typename Container>
typename MutantStack<T, Container>::reference MutantStack<T, Container>::top()
{
	return (this->C.back());
}

// Give the value of the top element (const)
template <typename T, typename Container>
typename MutantStack<T, Container>::const_reference MutantStack<T, Container>::top() const
{
	return (this->C.back());
}

// Check if the stack is empty or not
template <typename T, typename Container>
bool MutantStack<T, Container>::empty() const
{
	return (this->C.empty());
}

// Give size of the stack
template <typename T, typename Container>
size_type MutantStack<T, Container>::size(void) const
{
	return (this->C.size());
}

// add new element
// no typename for the value_type as this file seems
// can access through this fct's parameter
template <typename T, typename Container>
void MutantStack<T, Container>::push(value_type const & value)
{
	this->C.push_back(value);
}

template <typename T, typename Container>
void MutantStack<T, Container>::pop()
{
	this->C.pop_back();
}

template class MutantStack<int>; // explicit template instantiation
