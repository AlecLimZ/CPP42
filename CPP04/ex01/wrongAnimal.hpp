/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:04:17 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/01 14:20:29 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "animal.hpp"

class	WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal & operator=(WrongAnimal const & rhs);

		std::string getType(void) const;
		void setType(std::string n);

		void makeSound() const;
};

class	WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(WrongCat const & src);
		WrongCat & operator=(WrongCat const & rhs);

		void makeSound() const;
};

#endif
