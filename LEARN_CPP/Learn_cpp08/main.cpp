/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 08:59:02 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/02 13:23:48 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <deque>
#include <map>
#include <iostream>
#include <vector>
#include <list>
#include <numeric> // for accumulate operation function
#include <unordered_map>
#include <algorithm>
#include <iterator>
#include <functional>
#include <memory>
#include <stack>
#include <strstream>
#include <set>
#include <fstream>

using std::endl;
using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::list;
using std::map;
using std::begin;
using std::end;
using std::stack;

class IOperation;

void displayInt(int i)
{
	cout << i << endl;
}

int main(void)
{
	list<int> lst;

	lst.push_back(10);
	lst.push_back(23);
	lst.push_back(3);
	lst.push_back(17);
	lst.push_back(20);

	for_each(lst.begin(), lst.end(), displayInt);
}
