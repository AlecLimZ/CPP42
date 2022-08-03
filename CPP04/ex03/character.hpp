/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:25:31 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/03 18:02:10 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "materiasource.hpp"

class ICharacter
{
	public:
		virtual 		~ICharacter(){}
		virtual			std::string const & getName() const = 0;
		virtual	void	equip(AMateria * m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter & target) = 0;
};

class	Character: public ICharacter
{
	static int index;
	protected:
	std::string	_name;
	AMateria *inventory[5];
	public:
		//Canonical Form
		Character(void);
		~Character(void);
		Character(Character const & src);
		Character & operator=(Character const & rhs);
		//Constructor with parameter
		Character(std::string n);

		virtual			std::string const & getName() const;
		virtual void	equip(AMateria * m);
		virtual void 	unequip(int idx);
		virtual void	use(int idx, ICharacter & target);
};

std::ostream & operator<<(std::ostream & o, ICharacter const & rhs);

#endif
