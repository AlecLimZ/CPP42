/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:20:31 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/18 17:37:44 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// https://www.cuemath.com/geometry/area-of-triangle-in-coordinate-geometry/
// Area(ΔABC) = Area(Trap.BAED) + Area(Trap.ACFE) - Area(Trap.BCFD)
// Trapezium Area = (1/2) × Sum of bases × Height
float	ft_area(Point const *a, Point const *b, Point const *c)
{
	float	BAED = ((b->getY() + a->getY()) * (a->getX() - b->getX())) / 2;
	float	ACFE = ((a->getY() + c->getY()) * (c->getX() - a->getX())) / 2;
	float	BCDF = ((b->getY() + c->getY()) * (c->getX() - b->getX())) / 2;
	float	area = BAED + ACFE - BCDF;

	// method 2 simplify the Area(ABC) formula
//	float	area = 0.5 * (-b->getY() * c->getX() + a->getY() * (-b->getX() + c->getX()) + a->getX() * (b->getY() - c->getY()) + b->getX() * c->getY());

//	// method 3
//	float	area = 0.5 * (a->getX() * (b->getY() - c->getY()) + b->getX() * (c->getY() - a->getY()) + c->getX() * (a->getY() - b->getY()));

	return (area);
}

// baryenctric coordinate method but no BSP
// equation system formula to find the point's coordination: point = p0 + u * (p1 - p0) + v * (p2 - p0)
// since point is provided so we need to find value of u and v
// to determine whether point is in triangle area or not
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	area = ft_area(&a, &b, &c);
	float	u = 1 / (2 * area) * (a.getY() * c.getX() - a.getX() * c.getY() + (c.getY() - a.getY()) * point.getX() + (a.getX() - c.getX()) * point.getY());
	float	v = 1 / (2 * area) * (a.getX() * b.getY() - a.getY() * b.getX() + (a.getY() - b.getY()) * point.getX() + (b.getX() - a.getX()) * point.getY());
	
	if ((0 < u && u <= 1) && (0 < v && v <= 1) && (1 - u - v > 0))
		return (true);
	return (false);
}
