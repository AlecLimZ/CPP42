/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:56:04 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/09 10:13:13 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(void): stack<T>()
{}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack(void)
{}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(MutantStack const & src): stack<T>(src)
{}

template <typename T, typename Container>
MutantStack<T, Container> & MutantStack<T, Container>::operator=(MutantStack const & rhs)
{
//	typename stack<T>::container_type::iterator test = stack<T>::c.begin();
	if (this != &rhs)
		stack<T>::operator=(rhs);
	return (*this);
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin(void)
{
	return (stack<T>::c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end(void)
{
	return (stack<T>::c.end());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rbegin(void)
{
	return (stack<T>::c.rbegin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rend(void)
{
	return (stack<T>::c.rend());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin(void) const
{
	return (stack<T>::c.cbegin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end(void) const
{
	return (stack<T>::c.cend());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::rbegin(void) const
{
	return (stack<T>::c.crbegin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::rend(void) const
{
	return (stack<T>::c.crend());
}

// explicit template instantiation here
// i intend to not cover every data type if i want only 4 datatype:
// int, char, float and double to be used for my mutantStack
// i did this to learn how to use the expicit template instantiation.
template class MutantStack<int>;
template class MutantStack<char>;
template class MutantStack<float>;
template class MutantStack<double>;

template class MutantStack<int, vector<int> >;
template class MutantStack<char, vector<char> >;
template class MutantStack<float, vector<float> >;
template class MutantStack<double, vector<double> >;


template class MutantStack<int, list<int> >;
template class MutantStack<char, list<char> >;
template class MutantStack<float, list<float> >;
template class MutantStack<double, list<double> >;
