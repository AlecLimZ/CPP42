/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:56:42 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/24 18:59:47 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string & Weapon::getType() const
{
	std::string& strRef;

	strRef = this->type;
	return (strRef);
}

void Weapon::setType(std::string n)
{
	this->type = n;	
}
