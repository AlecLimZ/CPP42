/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:08:25 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/15 17:06:46 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	Fixed const	c(4);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(b, a) << std::endl;
	std::cout << (b > a) << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (b > c) << std::endl;
	
	std::cout << (b < a) << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (b < c) << std::endl;
	
	std::cout << (b >= a) << std::endl;
	std::cout << (a >= b) << std::endl;
	std::cout << (b >= c) << std::endl;
	
	std::cout << (b <= a) << std::endl;
	std::cout << (a <= b) << std::endl;
	std::cout << (b <= c) << std::endl;
	
	std::cout << (b >= a) << std::endl;
	std::cout << (a >= b) << std::endl;
	std::cout << (b >= c) << std::endl;
	
	std::cout << (b == a) << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (b == c) << std::endl;
	
	std::cout << (b != a) << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << (b != c) << std::endl;

	Fixed t;

	std::cout << (t = b + a) << std::endl;
	std::cout << (t = a + b) << std::endl;
	std::cout << (t = b + c) << std::endl;
	
	std::cout << (t = b - a) << std::endl;
	std::cout << (t = a - b) << std::endl;
	std::cout << (t = b - c) << std::endl;
	
	std::cout << (t = b * a) << std::endl;
	std::cout << (t = a * b) << std::endl;
	std::cout << (t = b * c) << std::endl;
	
	std::cout << (t = b / a) << std::endl;
	std::cout << (t = a / b) << std::endl;
	std::cout << (t = b / c) << std::endl;

	std::cout << ++a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << --a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << b-- << std::endl;
	std::cout << --b << std::endl;
	std::cout << b++ << std::endl;
	std::cout << ++b << std::endl;
	return (0);
}
