/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:39:04 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/23 18:21:08 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
	std::string name;
	public:
		Zombie(void){};
		~Zombie(void);
		void announce(void);
		void addname(std::string n);
};

Zombie*	zombieHorde(int N, std::string name);
