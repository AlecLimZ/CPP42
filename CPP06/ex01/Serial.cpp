/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:30:55 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/18 13:57:40 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t tmp = reinterpret_cast<uintptr_t>(ptr);
	return (tmp);
}

Data*	deserialize(uintptr_t raw)
{
	Data* tmp = reinterpret_cast<Data*>(raw);
	return (tmp);
}

uintptr_t serializeobj(Data2* ptr)
{
	uintptr_t tmp = reinterpret_cast<uintptr_t>(ptr);
	return (tmp);
}

Data2*	deserializeobj(uintptr_t raw)
{
	Data2* tmp = reinterpret_cast<Data2*>(raw);
	return (tmp);
}
