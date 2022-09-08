/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:38:18 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/08 11:45:46 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(int ac, char **av)
{
	int csize = 10000;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// extra edge test
	Span sp2 = Span(3);
	sp2.addNumber(-2);
	sp2.addNumber(-1);
	sp2.addNumber(INT_MAX);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	Span sp3 = Span(csize);
	sp3.fillRandofSize(csize); // generate 30000 random numbers to sp3 vector (not required by instruction)
	vector<int>::iterator it3 = sp3.getBegin();

	Span sp4 = Span(csize);
	// so that i can add fixed value to the last 5 empty slots of a vector for sp4. Also allow my fillSpan is using range iterator.
	std::advance(it3, 5);

	// fill from 5th index of sp3 vector till end of the sp3
	sp4.fillSpan(it3, sp3.getEnd()); // require by instruction

	sp4.addNumber(-2);
	sp4.addNumber(222);
	sp4.addNumber(33);
	sp4.addNumber(453);
	sp4.addNumber(-200);
	cout << sp4 << endl;
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;

	sp4.addNumber(100); // ops cannot sp4's span is full!
	return 0;
}
