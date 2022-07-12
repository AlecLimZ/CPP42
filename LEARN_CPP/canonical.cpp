/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:42:04 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/12 18:28:25 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Sample
{
	public:
		Sample(void);				// default constructor
		Sample(int const n, std::string name);
		Sample(Sample const & src);  // constructor copy
		~Sample (void);				// destructor

		Sample & operator=(Sample const & rhs); // assignment

		int	getFoo(void) const;
		std::string getName(void) const;
	private:
		int	_foo;
		std::string _name;
};

std::string Sample::getName(void) const
{
	return this->_name;
}

std::ostream & operator<<(std::ostream & o, Sample const & i)
{
	std::cout << i.getName();
	o << ": The value of _foo is: " << i.getFoo();
	return o;
}

Sample::Sample(void): _foo(0), _name("default")
{
	std::cout << this->_name;
	std::cout << ": Default Constructor called" << std::endl;
	return ;
}

Sample::Sample(int const n, std::string name): _foo(n), _name(name)
{
	std::cout << this->_name;
	std::cout << ": Parametric Constructor called" << std::endl;
	return ;
}

Sample::Sample(Sample const & src)
{
	std::cout << "this: " << this->_name << " | src: " << src.getName();
	std::cout << ": Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Sample::~Sample(void)
{
	std::cout << this->_name;
	std::cout << ": Destructor called" << std::endl;
	return ;
}

int	Sample::getFoo(void) const
{
	return this->_foo;
}

Sample & Sample::operator=(Sample const & rhs)
{
	std::cout << "this: " << this->_name << "| rhs name: " << rhs.getName();
	std::cout << " ~ Assignment operator called";
	if (this != &rhs)
	{
		this->_foo = rhs.getFoo();
		this->_name = "newcopy_" + rhs.getName();
	}
	std::cout << " inside new copy object's name:- " << this->_name << std::endl;
	return *this;
}

int main(void)
{
	Sample	instance1;
	Sample	instance2(42, "instance2");
	Sample	instance3(instance1);

	std::cout << "====================\n";
	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	std::cout << "====================\n";
	instance3 = instance2;
	std::cout << instance3 << std::endl;
	return (0);
}
