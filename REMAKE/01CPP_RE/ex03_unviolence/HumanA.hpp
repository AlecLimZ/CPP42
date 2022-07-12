/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:40:47 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/07 15:41:54 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <iostream>
#include <string>

class	HumanA
{
	std::string name;
	std::string const &weapon;
	public:
		HumanA(std::string n, Weapon & club);
		void attack(void);
};
