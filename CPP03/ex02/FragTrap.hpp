/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:40:15 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/26 15:11:11 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(FragTrap const & src);
		FragTrap & operator=(FragTrap const & rhs);
		FragTrap(std::string n);

	//member function
	void		attack(const std::string & target);
	void		highFivesGuys(void);
};

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs);

#endif
