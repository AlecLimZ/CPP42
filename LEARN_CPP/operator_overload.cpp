/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:51:11 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/13 17:06:12 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Integer
{
	public:
		Integer(int const n, std::string name);
		~Integer(void);

		int getValue(void) const;
		std::string getName(void) const { return this->_name; };

		Integer & operator=(Integer const & rhs);
		Integer operator+(Integer const & rhs) const;
	private:
		int _n;
		std::string _name;
};

std::ostream & operator<<(std::ostream & o, Integer const & rhs)
{
	o << rhs.getValue();
	return o;
}

Integer::Integer(int const n, std::string name = "Default") : _n(n), _name(name)
{
	std::cout << "Constructor: " << this->_name << " called with value: " << n << std::endl;
	return ;
}

Integer::~Integer(void)
{
	std::cout << "Destructor: " << this->_name << " called with value: " << this->_n << std::endl;
	return ;
}

int Integer::getValue(void) const
{
	return this->_n;
}

Integer & Integer::operator=(Integer const & rhs)
{
	std::cout << this->_name;
	std::cout << ": Assignation operator called from " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();
	return *this;
}

Integer Integer::operator+(Integer const & rhs) const
{
	std::cout << this->_name;
	std::cout << ": Addition operator called with " << this->_n;
	std::cout << " and " << rhs.getValue() << " y " << rhs.getName() << std::endl;
	return Integer(this->_n + rhs.getValue());
}

int main(void)
{
	Integer	x(30, "XxX");
	Integer	y(10, "YxY");
	Integer	z(0, "ZzZ");

	std::cout << "Value of x : " << x << std::endl;
	std::cout << "Value of y : " << std::endl;
	y = Integer(12);
	std::cout << "Value of y : " << y << std::endl;

	std::cout << "Value of z : " << z << std::endl;
	z = x + y;
	std::cout << "Value of z : " << z << std::endl;
}
