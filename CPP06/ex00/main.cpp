/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:13:04 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/17 18:17:06 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

bool is_number(const std::string & s)
{
	int dot = 0;
	int e = 0;
	int i = 0;
	if (s[0] == '-' || s[0] == '+')
		i++;
	while (s[i])
	{
		if (!isdigit(s[i]) && s[i] != '.')
			e++;
		if (s[i] == '.')
			dot++;
		i++;
	}
	if (!(s[0] != '.' && s[s.length() - 1] != '.' && dot <= 1 && e == 0))
		return (0);
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		cout << "Error! Please input ./main <number input>" << endl;
		return (1);
	}
	Conversion a(av[1]);
	return (0);
}
