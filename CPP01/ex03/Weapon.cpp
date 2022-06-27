/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:56:42 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/27 15:33:16 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string n)
{
	this->setType(n);
}

std::string const & Weapon::getType() // reference to const, const reference is impossible
{
	return (type);
}

void Weapon::setType(std::string n)
{
	this->type = n;	
}
