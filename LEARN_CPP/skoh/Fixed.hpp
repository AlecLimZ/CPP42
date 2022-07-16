/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:13:05 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/15 13:36:00 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class	Fixed
{
	int					_fix;
	static int const	_frac;
	public:
		Fixed(void); // default
		Fixed(Fixed const & src); // copy constructor
		Fixed & operator=(Fixed const & rhs); // assignment operator overload
		~Fixed(void); // destructor
		Fixed(int const raw);
		Fixed(float const raw);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);
