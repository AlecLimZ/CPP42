/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:37:22 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/17 13:06:29 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <math.h>
#include <exception>
#include <iomanip>

using std::cout;
using std::endl;
using std::string;

enum class cap
{
	title, middle, end
};

void print(const char* text, double num, cap c)
{
	if (c == cap::title)
		std::cout <<
}
