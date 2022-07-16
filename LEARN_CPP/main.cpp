/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:38:38 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/14 17:55:40 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Sample
{
	public:
		Sample(void);
		Sample(int const n, std::string name);
		Sample(Sample const & src);
		~Sample(void);

		Sample & operator=(Sample const & rhs);

		int	getFoo(void) const;
		std::string getName(void) const;
	private:
		int	_foo;
		std::string	_name;
};

std::string Sample::getName(void) const
{
	return this->_name;
}

std::ostream & operator<<(std::ostream & o, Sample const & i)
{
	o << ": The value of _foo is: " << i.getFoo();
	return o;
}

Sample::Sample(void):_name("default")
{
	std::cout << ": Default Constructor called" << std::endl;
	std::cout << "_foo: " << this->_foo << std::endl;
	return ;
}

Sample::Sample(int const n, std::string name): _foo(n), _name(name)
{
	std::cout << ": Parametric Constructor called" << std::endl;
	return ;
}

Sample::Sample(Sample const & src)
{
	std::cout << ": Copt Constructor called" << std::endl;
	*this = src;
	return ;
}

Sample::~Sample(void)
{
	std::cout << ": Destructor called" << std::endl;
	return ;
}

int	Sample::getFoo(void) const
{
	return this->_foo;
}

Sample & Sample::operator=(Sample const & rhs)
{
	std::cout << " ~ Assignment operator called\n";
	this->_foo = rhs.getFoo();
//	if (this != &rhs)
//		this->_foo = rhs.getFoo();
	return *this;
}

int	main(void)
{
	Sample	instance1;
	Sample	instance2(42, "instance2");
	Sample	instance3(instance1);

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	instance3 = instance2;
	std::cout << instance3 << std::endl;
	return (0);
}
