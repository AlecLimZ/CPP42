/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:59:20 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/18 15:54:33 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include "color.hpp"
# include <iostream>
# include <iomanip>

using std::cout;
using std::endl;
using std::string;

struct Data
{
	string	name;
	int		age;
	float	weight;
};

class Data2
{
	string _name;
	int		_age;
	float	_weight;
	public:
		//Canoncial form
		Data2(void);
		~Data2(void);
		Data2(Data2 const & src);
		Data2 & operator=(Data2 const & rhs);

		Data2(string n, int a, float w);

		//getter
		string	getName(void) const;
		int		getAge(void) const;
		float	getWeight(void) const;

		//setter
		void	setName(string n);
		void	setAge(int a);
		void	setWeight(float w);
};

std::ostream & operator<<(std::ostream & o, Data2 const & rhs);
std::ostream & operator<<(std::ostream & o, Data const & rhs);

#endif
