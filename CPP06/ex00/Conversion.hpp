/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:12:11 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/18 12:37:04 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <sstream>
# include <cmath>
# include <cctype> // for using isprint() return zero if printable for char
# include <iomanip> // for using std::setprecision()

using std::cout;
using std::endl;
using std::string;

class Conversion
{
	string		_input;
	long double	_type;
	public:
		// Canoncial form
		Conversion(void);
		~Conversion(void);
		Conversion(Conversion const & src);
		Conversion & operator=(Conversion const & rhs);

		explicit Conversion(char *s);

		// setter & getter
		string		getInput(void) const;
		void		setInput(string n);
		long double	getType(void) const;
		void		setType(long double n);

		// convert input to long double
		void	stold(void);

		//operator type
		operator int(void);
		operator float(void);
		operator char(void);
		operator double(void);

		//display at constructor
		int	display(void);

		//exception handling
		void	e_catch(void);

		//+inff, -inff, +inf & +inf
		string check_inf(void);

		// check is number or not
		bool is_number(const std::string & s);
};

#endif
