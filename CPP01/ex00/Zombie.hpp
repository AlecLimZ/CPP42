/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:04:50 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/22 20:34:00 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
	std::string name;
	public:
		Zombie(std::string n)
		:name(n){};
		~Zombie(void);
		void announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
