/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:13:05 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/15 13:56:40 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Fixed
{
	int					_fix;
	static int const	_frac;
	public:
		Fixed(void); // default
		Fixed(Fixed const & src); // copy constructor
		Fixed & operator=(Fixed const & rhs); // assignment operator overload
		~Fixed(void); // destructor
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
