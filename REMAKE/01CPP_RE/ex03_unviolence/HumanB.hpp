/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:50:56 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/07 15:52:02 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	std::string name;
	std::string const * weapon;
	public:
		HumanB(std::string n);
		void attack(void);
		void setWeapon(Weapon & club);
};
