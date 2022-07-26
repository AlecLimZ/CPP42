/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:55:21 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/26 13:41:23 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

# define DEF	"\033[0m"
# define BLACK	"\033[30m"
# define RED	"\033[31m"
# define GREEN	"\033[32m"
# define YELLOW	"\033[33m"
# define BLUE	"\033[34m"
# define MAG	"\033[35m"
# define CYAN	"\033[36m"
# define WHITE	"\033[37m"

# define BBLACK		"\033[1m\033[30m"
# define BRED		"\033[1m\033[31m"
# define BGREEN		"\033[1m\033[32m"
# define BYELLOW	"\033[1m\033[33m"
# define BBLUE		"\033[1m\033[34m"
# define BMAG		"\033[1m\033[35m"
# define BCYAN		"\033[1m\033[36m"
# define BWHITE		"\033[1m\033[37m"

class ClapTrap
{
	int	_hitp;
	int	_ep;
	int	_atkd;
	protected:
		std::string _name;
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
