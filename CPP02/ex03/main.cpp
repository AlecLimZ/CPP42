/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:08:25 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/18 17:45:14 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point	a(-2, 3);
	Point	b(3, 2);
	Point	c(1, 5);
	float	x;
	float	y;
	
	std::cout << "===Program Is point in triangle?===" << std::endl;
	std::cout << "Give x in float number for point->: ";
	std::cin >> x;
	std::cout << "Give y in float number for point->: ";
	std::cin >> y;
	Point	pt(x, y);

	if (bsp(a, b, c, pt))
	{
		std::cout << "Ya ya, the point is in the triangle A:"; a.P_display(); std::cout << " B:"; b.P_display(); std::cout << " B:"; b.P_display(); std::cout << std::endl;
	}
	else
	{
		std::cout << "No, the point is not in the triangle A:"; a.P_display(); std::cout << " B:"; b.P_display(); std::cout << " B:"; b.P_display(); std::cout << std::endl;
	}
	return (0);
}
