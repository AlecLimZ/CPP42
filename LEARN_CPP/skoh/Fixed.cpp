/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:36:47 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/15 13:51:44 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _fix(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fix = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int const	Fixed::_frac = 1;

int	Fixed::getRawBits(void) const
{
	return (this->_fix);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fix = raw;
}

Fixed::Fixed(int const raw)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(raw << this->_frac);
}

Fixed::Fixed(float const raw)
{
	int fixed;
	float r;
	int	count = 11;

	r = raw;
//	std::cout << "Float constructor called" << std::endl;
	while (--count)
	{
		fixed = roundf(r * (1 << this->_frac));
		this->setRawBits(fixed);
		std::cout << "raw float " << r << " vs fixed " << fixed << " vs after toFloat " << toFloat() << std::endl;
		r += 0.1f;
	}
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fix / (float)(1 << this->_frac));
}

int		Fixed::toInt(void) const
{
	return ((int)this->_fix / (int)(1 << this->_frac));
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
