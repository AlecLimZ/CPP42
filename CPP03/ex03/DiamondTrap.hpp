/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:16:09 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/26 13:10:30 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	std::string _name;
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const & src);
		~DiamondTrap(void);
		DiamondTrap & operator=(DiamondTrap const & rhs);
		DiamondTrap(std::string n);

		void attack(const std::string & target);
		void whoAmI();

		//extra
		std::string getDname(void) const;
};

std::ostream & operator<<(std::ostream & o, DiamondTrap const & rhs);

#endif
