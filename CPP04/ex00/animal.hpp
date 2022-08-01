/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:04:17 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/30 21:27:31 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define DEF    "\033[0m"
# define BLACK  "\033[30m"
# define RED    "\033[31m"
# define GREEN  "\033[32m"
# define YELLOW "\033[33m"
# define BLUE   "\033[34m"
# define MAG    "\033[35m"
# define CYAN   "\033[36m"
# define WHITE  "\033[37m"

# define BBLACK         "\033[1m\033[30m"
# define BRED           "\033[1m\033[31m"
# define BGREEN         "\033[1m\033[32m"
# define BYELLOW        "\033[1m\033[33m"
# define BBLUE          "\033[1m\033[34m"
# define BMAG           "\033[1m\033[35m"
# define BCYAN          "\033[1m\033[36m"
# define BWHITE         "\033[1m\033[37m"

class	Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		~Animal(void);
		Animal(Animal const & src);
		Animal & operator=(Animal const & rhs);

		std::string getType(void) const;
		void setType(std::string n);

		void makeSound();
};

class	Cat: public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);
		Cat(std::string t);

		void makeSound();
};

class	Dog: public Animal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);
		Dog(std::string t);

		void makeSound();
};

#endif
