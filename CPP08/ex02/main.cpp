/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:05:51 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/09 08:31:19 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main(void)
{
	MutantStack<int> lol;

	lol.push(10);
	MutantStack<int> lol2;
	lol2 = lol;
	lol2.push(22);
	lol2.push(220);
	lol2.push(2200);
	MutantStack<int>::iterator it = lol2.begin();

	cout << *it << endl;
}
