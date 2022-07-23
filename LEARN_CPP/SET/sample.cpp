/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:24:55 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/23 15:28:48 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.hpp"

Sample::Sample(int v) : _foo(v)
{
	return ;
}

Sample::~Sample(void)
{
	return ;
}

int	Sample::getFoo(void) const
{
	return this->_foo;
}

int	Sample::compare(Sample *other) const
{
	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);
	return (0);
}
