/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:55:21 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/25 10:59:50 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	std::string _name;
	int	_hitp;
	int	_ep;
	int	_atkd;
	public:
		// Orthodox Canonical Form & parameter constructor
		ClapTrap(void);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);
		ClapTrap & operator=(ClapTrap const & rhs);
		ClapTrap(std::string n);

		// setting this object's details
		void	setName(std::string name);
		void	setHp(int hp);
		void	setEp(int ep);
		void	setAtk(int atk);

		// return this object's details
		std::string	getName(void) const;
		int	getHp(void) const;
		int	getEp(void) const;
		int	getAtk(void) const;

		// member functions
		void	attack(const std::string & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

std::ostream & operator<<(std::ostream & o, ClapTrap const & i);

#endif
