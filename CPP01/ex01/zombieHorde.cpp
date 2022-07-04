/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:19:57 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/04 13:23:45 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*zombieHorde(int N, std::string name)
{
	Zombie*horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].addname(name);
		horde[i].announce();
	}
	return (horde);
}
