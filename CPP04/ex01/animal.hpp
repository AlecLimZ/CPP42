/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:04:17 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/01 19:50:33 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "brain.hpp"

class	Animal
{
	protected:
		std::string type;
		static int _id;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(Animal const & src);
		Animal & operator=(Animal const & rhs);

		std::string getType(void) const;
		void setType(std::string n);

		virtual void makeSound() const;
};

class	Cat: public Animal
{
	//private Brain for cat
	Brain *_c;
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);

		virtual void makeSound() const;
		Brain *	getBrain(void) const;
};

class	Dog: public Animal
{
	//private Brain for dog
	Brain *_d;
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);

		virtual void makeSound() const;
};

#endif
