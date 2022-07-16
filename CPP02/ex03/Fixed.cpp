/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:36:47 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/15 17:57:19 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_frac = 8;

Fixed::Fixed(void): _fix(0)
{
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_fix = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
}

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
	this->setRawBits(raw << this->_frac);
}

Fixed::Fixed(float const raw)
{
	int fixed;

	fixed = roundf(raw * (1 << this->_frac));
	this->setRawBits(fixed);
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

int		Fixed::operator>(Fixed const & rhs) const
{
	return(this->_fix > rhs.getRawBits());
}

int		Fixed::operator<(Fixed const & rhs) const
{
	return(this->_fix < rhs.getRawBits());
}

int		Fixed::operator>=(Fixed const & rhs) const
{
	return(this->_fix >= rhs.getRawBits());
}

int		Fixed::operator<=(Fixed const & rhs) const
{
	return(this->_fix <= rhs.getRawBits());
}

int		Fixed::operator==(Fixed const & rhs) const
{
	return(this->_fix == rhs.getRawBits());
}

int		Fixed::operator!=(Fixed const & rhs) const
{
	return(this->_fix != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	Fixed	temp;

	temp._fix = this->_fix + rhs.getRawBits();
	return (temp);
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	Fixed temp;

	temp._fix = this->_fix - rhs.getRawBits();
	return (temp);
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	Fixed temp;

	temp._fix = this->_fix * rhs.toFloat();
	return (temp);
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	Fixed temp;

	temp._fix = this->_fix / rhs.toFloat();
	return (temp);
}

Fixed & Fixed::operator--(void)
{
	this->_fix--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	
	temp._fix = this->_fix--;
	return (temp);
}

Fixed & Fixed::operator++(void)
{
	this->_fix++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp;

	temp._fix = this->_fix++;
	return (temp);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
