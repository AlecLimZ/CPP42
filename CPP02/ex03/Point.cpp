/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:58:18 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/18 17:43:54 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::~Point(void) {}

void	Point::P_display(void)
{
	std::cout << "(" << this->_x << ", " << this->_y << ")";;
}

Point::Point(float const a, float const b): _x(a), _y(b) {}

Point::Point(Point const & src): _x(src.getX()), _y(src.getY()) {}

float Point::getX(void) const
{
	return (this->_x.toFloat());
}

float Point::getY(void) const
{
	return (this->_y.toFloat());
}

Point Point::operator=(Point const & rhs)
{
	Point tmp(rhs);
	
	return (tmp);
}
