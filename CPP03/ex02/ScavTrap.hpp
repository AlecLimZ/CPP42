/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:52:31 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/26 15:10:38 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

// inherit from ClapTrap
class ScavTrap: public ClapTrap
{
	public:
		// Orthodox Canonical Form & parameter constructor
		ScavTrap(void);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & rhs);
		ScavTrap(std::string n);

		//member function
		void	attack(const std::string & target);
		void	guardGate();

		//extra
		ScavTrap & operator=(ClapTrap const & rhs);
};

std::ostream & operator<<(std::ostream & o, ScavTrap const & rhs);

#endif
