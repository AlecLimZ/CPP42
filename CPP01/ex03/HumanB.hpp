/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:08:18 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/27 15:47:26 by leng-chu         ###   ########.fr       */
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
