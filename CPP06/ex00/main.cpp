/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:13:04 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/18 11:09:33 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

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
