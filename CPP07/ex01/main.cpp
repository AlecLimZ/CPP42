/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:59:03 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/22 15:00:20 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	ft_type(string type)
{
	cout << "\n===" << type << "===\n";
}

int main(void)
{
	// int
	int a[] = {23, 234, 777, -43};
	ft_type("int");
	::iter<int>(a, 4, ::ft_printelem);
	
	// char
	char b[] = {'a', 'z', '!', '@'};
	ft_type("char");
	::iter<char>(b, 4, ::ft_printelem);
	
	// string
	string c[] = {"42kl", "best", "happy", "cadet"};
	ft_type("string");
	::iter<string>(c, 4, ::ft_printelem);

	// float
	float d[] = {11.1f, 22.22f, -0.43f, 7.7f};
	ft_type("float");
	::iter<float>(d, 4, ::ft_printelem);	
	
	// double
	double e[] = {11.111, -24.22, 0.333, 77.77};
	ft_type("double");
	::iter<double>(e, 4, ::ft_printelem);	
	
	// bool
	bool f[] = {true, false, true, true};
	ft_type("bool");
	::iter<bool>(f, 4, ::ft_printelem);	
}
