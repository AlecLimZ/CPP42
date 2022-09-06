/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 08:59:02 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/06 17:29:45 by leng-chu         ###   ########.fr       */
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

using std::array;
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

class MyIterator : public std::iterator<std::input_iterator_tag, int>
{
	int *p;
	public:
		MyIterator(int *x): p(x) {}
		MyIterator(const MyIterator & mit) : p(mit.p) {}
		MyIterator & operator++() { ++p; return *this; }
		MyIterator operator++(int) { MyIterator tmp(*this); operator++(); return tmp; }
		bool operator==(const MyIterator & rhs) const { return p == rhs.p; }
		bool operator!=(const MyIterator & rhs) const { return p != rhs.p; }
		int & operator * () { return *p;}
};

int main(void)
{
	int numbers[] = {10, 20, 30, 40, 50};
	MyIterator from(numbers);
	MyIterator until(numbers+5);
	for (MyIterator it = from; it != until; it++)
		cout << *it << ' ';
	cout << endl;
}
