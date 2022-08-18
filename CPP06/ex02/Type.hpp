/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:51:22 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/18 14:59:10 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_HPP
# define TYPE_HPP

# include <iostream>
# include "color.hpp"

using std::cout;
using std::endl;
using std::string;

class Base
{
	public:
		virtual ~Base(void){};
};

class A: public Base{};

class B: public Base{};

class C: public Base{};

#endif
