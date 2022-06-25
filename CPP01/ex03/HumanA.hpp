/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:09:41 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/25 17:14:06 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
		std::string name;
		std::string const &weapon;
	public:
		HumanA(std::string n, Weapon & club);
		void attack(void);
};
