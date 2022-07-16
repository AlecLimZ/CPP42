/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:13:05 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/15 17:12:46 by leng-chu         ###   ########.fr       */
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

		/* 6 camparison operators */
		int		operator>(Fixed const & rhs) const;
		int		operator<(Fixed const & rhs) const;
		int		operator>=(Fixed const & rhs) const;
		int		operator<=(Fixed const & rhs) const;
		int		operator==(Fixed const & rhs) const;
		int		operator!=(Fixed const & rhs) const;

		/* 4 arithmetic operators */
		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;
		
		/* 4 increment/decrement operators */
		Fixed & operator--(void);
		Fixed	operator--(int);
		Fixed & operator++(void);
		Fixed	operator++(int);

		/* 4 static overloaded member functions*/
		static Fixed & min(Fixed & a, Fixed & b);
		static Fixed const & min(Fixed const & a, Fixed const & b);
		static Fixed & max(Fixed & a, Fixed & b);
		static Fixed const & max(Fixed const & a, Fixed const & b);
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);
