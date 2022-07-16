/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:52:38 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/16 17:03:15 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class	Point
{
	Fixed const	_x;
	Fixed const	_y;
	public:
		Point(void);
		Point(float const a, float const b);
		Point(Point const & src);
		Point operator=(Point const & rhs);
		~Point(void);
		void P_display(void);
		float getX(void) const;
		float getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
