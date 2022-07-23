/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inherit.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:56:57 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/23 15:07:54 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Animal
{
	private:
		int	_numberOfLegs;
	public:
		Animal();
		Animal(Animal const &);
		Animal &operator=(Animal const &);
		~Animal();

		void	run(int distance);
		void	call();
		void	eat(std::string const & what);
		void	walk(int distance);
};

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &);
		Cat & operator=(Cat const &);
		~Cat();

		void	scornSomeone(std::string const & target);
};

class Pony : public Animal
{
	public:
		Pony();
		Pony(Pony const &);
		Pony & operator=(Pony const &);
		~Pony();

		void doMagic(std::string const & target);
};
