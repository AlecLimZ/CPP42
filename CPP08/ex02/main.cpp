/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:05:51 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/12 12:49:59 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main(void)
{
	cout << GRN << "=====My MutantStack=====" << endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)	
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	cout << CYAN "=====Vector=====" << endl;
	vector<int> vstack;
	vstack.push_back(5);
	vstack.push_back(17);
	std::cout << vstack.back() << std::endl;
	vstack.pop_back();
	std::cout << vstack.size() << std::endl;
	vstack.push_back(3);
	vstack.push_back(5);
	vstack.push_back(737);
	vstack.push_back(42);
	vstack.push_back(0);
	vector<int>::iterator itv = vstack.begin();
	vector<int>::iterator itve = vstack.end();
	++itv;
	--itv;
	while (itv != itve)	
	{
		std::cout << *itv << std::endl;
		++itv;
	}
	std::vector<int> sv(vstack);

	cout << YLW "=====LIST=====" << endl;
	std::list<int> listack;
	listack.push_back(5);
	listack.push_back(17);
	std::cout << listack.back() << std::endl;
	listack.pop_back();
	std::cout << listack.size() << std::endl;
	listack.push_back(3);
	listack.push_back(5);
	listack.push_back(737);
	listack.push_back(42);
	listack.push_back(0);
	std::list<int>::iterator itt = listack.begin();
	std::list<int>::iterator itte = listack.end();
	++itt;
	--itt;
	while (itt != itte)	
	{
		std::cout << *itt << std::endl;
		++itt;
	}
	std::list<int> slist(listack);
	
	cout <<  MAG"=====Deque=====" << endl;
	std::deque<int> des;
	des.push_back(5);
	des.push_back(17);
	std::cout << des.back() << std::endl;
	des.pop_back();
	std::cout << des.size() << std::endl;
	des.push_back(3);
	des.push_back(5);
	des.push_back(737);
	des.push_back(42);
	des.push_back(0);
	std::deque<int>::iterator itd = des.begin();
	std::deque<int>::iterator itde = des.end();
	++itd;
	--itd;
	while (itd != itde)	
	{
		std::cout << *itd << std::endl;
		++itd;
	}
	return (0);
}
