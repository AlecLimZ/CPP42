/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:56:04 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/09 08:31:51 by leng-chu         ###   ########.fr       */
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

template class MutantStack<int>;
template class MutantStack<int, vector<int> >;
